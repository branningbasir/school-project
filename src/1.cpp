
class RandomNumber {
public:
int getRandom(int low, int high) {
    std::random_device rd;
    std::mt19937 mersenneTwister(rd());
    std::uniform_int_distribution<int> distribution(low, high);
    return distribution(mersenneTwister);
}
};