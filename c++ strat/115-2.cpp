#include <iostream>

using namespace std;

int main() {
	int n;
	string s[5] = { "�ݶ�", "��", "��������Ʈ", "�ֽ�", "Ŀ��" };
	cout << "�ݶ�, ��, ��������Ʈ, �ֽ�, Ŀ�� �߿��� �ϳ��� �����ϼ���: ";
	cin >> n;
	if (n > 5 || n < 1) {
		cout << "����, ������ ��ȿ���� �ʽ��ϴ�.";
	}
	cout << s[n] << "�� �����Ͽ����ϴ�.";
}