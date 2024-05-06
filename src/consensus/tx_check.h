// tx_check.h

// Declaration of reward distribution functions
void DistributeRewards(const CTransaction& tx);
int64_t CalculateReward(const CTransaction& tx);
void AddRewardToUploader(const CTransaction& tx, int64_t reward);
