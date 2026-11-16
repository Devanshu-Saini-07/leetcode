class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {

            if (flowerbed[i] == 0) {

                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);

                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {

                    flowerbed[i] = 1;
                    n--;

                }
            }
        }

        return n <= 0;
    }
};