#ifndef BITCOIN_VALIDATION_H
#define BITCOIN_VALIDATION_H

#include "primitives/transaction.h"

/** Check a transaction for validity. */
bool CheckTransaction(const CTransaction& tx, CValidationState& state, bool fCheckProofOfWork = true);

#endif // BITCOIN_VALIDATION_H
