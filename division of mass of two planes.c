#include<stdio.h> 
#include<math.h>
#include<stdlib.h> 

int main()
{
	float Mass_PlanA;                           //���ټ������ٽ����ٶȱ�ֵ��һ������
	float Radius_PlanA;
	float Mass_PlanB;
	float Radius_PlanB;
	double K;

	printf("��������A��B���������(��ǧ��Ϊ��λ)\n");
	scanf_s("%f %f", &Mass_PlanA, &Mass_PlanB);
	getchar(); // ��ȡ���뻺�����еĻ��з�
	printf("����������A��B����İ뾶������Ϊ��λ��\n");
	scanf_s("%f %f", &Radius_PlanA, &Radius_PlanB);
	getchar(); // ��ȡ���뻺�����еĻ��з�
	printf("ȷ�����������ֵΪ��Mass_A=%f,Mass_B=%f,Radius_A=%f,Radius_B=%f\n", Mass_PlanA, Mass_PlanB, Radius_PlanA, Radius_PlanB);

	K = Mass_PlanA / Mass_PlanB;
	double K2 = pow((Radius_PlanB / Radius_PlanA), 2);
	K = K / K2;

	printf("A���������ٶ�ΪB�����%f�������������ת��\n", K);

	return 0;
}