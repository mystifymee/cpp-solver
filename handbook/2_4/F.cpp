#include <iostream>
#include <string>
#include <vector>


int main()
{

    int m, n, k;
    std::cin >> m >> n >> k;

    
    std::vector<std::vector<int>> field(m, std::vector<int>(n, 0));


    for(int i = 0; i < k; i++)
    {
        int row, col;
        std::cin >> row >> col;
        field[row - 1][col - 1] = -1;
    }



    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (field[i][j] == -1)
                continue;

             int count = 0;

            for(int di = -1; di <= 1; di++)
            {
                for(int dj = -1; dj <= 1; dj++)
                {
                    if(di == 0 && dj == 0){continue;}
                    int ni = i + di;
                    int nj = j + dj;
                    if(ni >= 0 && ni < m && nj >= 0 && nj < n)
                    {
                        if(field[ni][nj] == -1) {
                            count++;
                        }

                    }
                    field[i][j] = count;
                }
            }


    }
}

for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
        {
            if(field[i][j] == -1)
            {
                std::cout << "* ";
                continue;
            }

            std::cout << field[i][j] << " ";
        }
        std::cout << "\n";
    }
}