#include <wiringPi.h>

// ������� LED�� ������� 0 wiringPi ����� BCM_GPIO�17.
// ��� ������������� � �������������� wiringPiSetupSys ����� ��������� ��������� BCM
// ��� ������ ������� ���-���� ����������� ��������� BCM, �����
// �������� ������� "�������� �������"�� "������� ������"�� "��������� ������� ����� ������". 
// , ������� ���������� gpio export ��� ��������� �������� ��� wiringPiSetupSys
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // ���.
		delay(500); // ��
		digitalWrite(LED, LOW);	  // ����.
		delay(500);
	}
	return 0;
}