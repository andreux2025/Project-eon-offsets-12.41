class FName final
{
public:
	static inline void*                           AppendString = nullptr;                            // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)

	int32                                         ComparisonIndex;                                   // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         Number;                                            // 0x0004(0x0004)(NOT AUTO-GENERATED PROPERTY)

public:
	static void InitInternal()
	{
		AppendString = reinterpret_cast<void*>(InSDKUtils::GetImageBase() + Offsets::AppendString);//0x02C1DEA0
	}
	static void InitManually(void* Location)
	{
		AppendString = reinterpret_cast<void*>(Location);
	}

	int32 GetDisplayIndex() const
	{
		return ComparisonIndex;
	}
	
	std::string GetRawString() const
	{
		thread_local FAllocatedString TempString(1024);
	
		if (!AppendString)
			InitInternal();
	
		InSDKUtils::CallGameFunction(reinterpret_cast<void(*)(const FName*, FString&)>(AppendString), this, TempString);
	
		std::string OutputString = TempString.ToString();
		TempString.Clear();
	
		return OutputString;
	}
	
	std::string ToString() const
	{
		std::string OutputString = GetRawString();
	
		size_t pos = OutputString.rfind('/');
	
		if (pos == std::string::npos)
			return OutputString;
	
		return OutputString.substr(pos + 1);
	}
	
	bool operator==(const FName& Other) const
	{
		return ComparisonIndex == Other.ComparisonIndex && Number == Other.Number;
	}
	bool operator!=(const FName& Other) const
	{
		return ComparisonIndex != Other.ComparisonIndex || Number != Other.Number;
	}
};
