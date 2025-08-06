//TLE
class Solution {
public:
int MinCoins(vector<int> coins, int n, int amt)
{
    if (n == 0) {
        if (amt % coins[0] == 0) return amt / coins[0];
        else return -1;
    }

    if (amt == 0) return 0;

    if (coins[n] > amt) {
        return MinCoins(coins, n - 1, amt);
    }

    int notTake = MinCoins(coins, n - 1, amt);
    int take = MinCoins(coins, n, amt - coins[n]);

    if (take != -1) take = 1 + take;

    if (take == -1 && notTake == -1) return -1;
    else if (take == -1) return notTake;
    else if (notTake == -1) return take;
    else return min(take, notTake);
}

int coinChange(vector<int>& coins, int amount) {
    return MinCoins(coins, coins.size() - 1, amount);
}
};
