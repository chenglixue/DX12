
struct PSInput
{
	float4 position : SV_POSITION;
	float4 color : COLOR;
};


PSInput VSMain(float4 pos : POSITION, float4 color : COLOR)
{
	PSInput result;
	result.position = pos;
	result.color = color;

	return result;
}

float4 PSMain(PSInput input) : SV_TARGET	//This SV is used for pixel shader output color
{
	return input.color;
}