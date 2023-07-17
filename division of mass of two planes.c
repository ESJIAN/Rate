#include<stdio.h> 
#include<math.h>
#include<stdlib.h> 

int main()
{
	float Mass_PlanA;                           //快速计算赤道临近加速度比值的一个程序
	float Radius_PlanA;
	float Mass_PlanB;
	float Radius_PlanB;
	double K;

	printf("依次输入A，B星球的质量(以千克为单位)\n");
	scanf_s("%f %f", &Mass_PlanA, &Mass_PlanB);
	getchar(); // 读取输入缓冲区中的换行符
	printf("在依次输入A，B星球的半径（以米为单位）\n");
	scanf_s("%f %f", &Radius_PlanA, &Radius_PlanB);
	getchar(); // 读取输入缓冲区中的换行符
	printf("确认你所输入的值为，Mass_A=%f,Mass_B=%f,Radius_A=%f,Radius_B=%f\n", Mass_PlanA, Mass_PlanB, Radius_PlanA, Radius_PlanB);

	K = Mass_PlanA / Mass_PlanB;
	double K2 = pow((Radius_PlanB / Radius_PlanA), 2);
	K = K / K2;

	printf("A星球赤道加速度为B星球的%f倍（假设忽略自转）\n", K);

	return 0;
}