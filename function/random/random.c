#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536; // 전역변수로 일부 작성

static unsigned int seed = SEED; // 난수 생성 시드값, seed는 밑에 두 함수에서만 사용 가능

unsigned random_i() {
	seed = (MULT * seed + INC) % MOD;
	return seed;
}
double random_f() {
	seed = (MULT * seed + INC) % MOD; // 난수의 시드값 설정
	return seed / (double)MOD; // 0.0에서 1.0사이로 제한
}

