#pragma once

struct OpenKey {
	int e;
	int n;
};

struct PrivateKey {
	int d;
	int n;
};

class Encryptor
{
	OpenKey openKey;
	PrivateKey privateKey;

	void GenerateKeysPair(int p, int q);
	bool IsPrimeNumber(int n);
	int GeneratePrimeNumber(int min, int max);
	int gcd(int a, int b);
};

