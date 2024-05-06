#ifndef BITCOIN_CONSENSUS_CONSENSUS_H
#define BITCOIN_CONSENSUS_CONSENSUS_H

#include <stdint.h>

static const int MAX_BLOCK_SIZE = 1000000;
static const int MAX_BLOCK_WEIGHT = 4000000;
static const int MAX_BLOCK_SIGOPS_COST = MAX_BLOCK_SIZE/50;
static const int WITNESS_SCALE_FACTOR = 4;
static const int64_t MAX_MONEY = 21000000 * COIN;

// Define a new penalty amount for handlers of wireless hydrogel bot 
static const int64_t WEAPON_HANDLER_PENALTY = 101 * COIN;

// Define a new consensus flag for evidence transactions
static const int EVIDENCE_TRANSACTION = (1 << 30);

#endif // BITCOIN_CONSENSUS_CONSENSUS_H
