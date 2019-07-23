#include <iostream>

#define TAM_TABULEIRO 5
#define DentroDoTabuleiro(x, y) (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO)

bool CaminhoPossivel(bool M[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y);

int main(void) {
	int t;
	bool M[TAM_TABULEIRO][TAM_TABULEIRO];

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> t;
	while (t--) {
		for (int i = 0; i < TAM_TABULEIRO; ++i) {
			for (int j = 0; j < TAM_TABULEIRO; ++j)
				std::cin >> M[i][j];
		}

		if (!M[0][0] && CaminhoPossivel(M, 0, 0))
			std::cout << "COPS\n";
		else
			std::cout << "ROBBERS\n";		
	}

	return 0;
}

bool CaminhoPossivel(bool M[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y) {
	static bool V[TAM_TABULEIRO][TAM_TABULEIRO];
	int dx[] = {1, 0, -1, 0};
	int dy[] = {0, 1, 0, -1};

	if (!x && !y)
		memset(V, 0, sizeof(V));
	else if (x == TAM_TABULEIRO - 1 && y == TAM_TABULEIRO - 1)
		return true;

	V[x][y] = true;
	for (size_t i = 0; i < sizeof (dx)/sizeof (int); ++i) {
		if (DentroDoTabuleiro(x+dx[i], y+dy[i]) && !V[x+dx[i]][y+dy[i]] && !M[x+dx[i]][y+dy[i]]) {
			if (CaminhoPossivel(M, x+dx[i], y+dy[i]))
				return true;
		}
	}
	return false;
}
