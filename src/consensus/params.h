// Adjust maximum block size and weight
static const int MAX_BLOCK_SIZE = 2000000;
static const int MAX_BLOCK_WEIGHT = 8000000;

// Adjust maximum sigops cost
static const int MAX_BLOCK_SIGOPS_COST = MAX_BLOCK_SIZE / 50;

// Define a new reward reduction interval
static const int64_t TOKEN_REWARD_REDUCTION_INTERVAL = 1000; // Blocks

// Define a new penalty interval
static const int64_t PENALTY_INTERVAL = 200; // Blocks

// Adjust max money supply
static const int64_t MAX_MONEY_SUPPLY = 1000000000 * COIN;
