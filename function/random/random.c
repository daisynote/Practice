#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536; // ���������� �Ϻ� �ۼ�

static unsigned int seed = SEED; // ���� ���� �õ尪, seed�� �ؿ� �� �Լ������� ��� ����

unsigned random_i() {
	seed = (MULT * seed + INC) % MOD;
	return seed;
}
double random_f() {
	seed = (MULT * seed + INC) % MOD; // ������ �õ尪 ����
	return seed / (double)MOD; // 0.0���� 1.0���̷� ����
}

