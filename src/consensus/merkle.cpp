// merkle.cpp

// Include evidence transactions in the Merkle tree calculation
void CBlockHeader::CalculateMerkleRoot() const
{
    std::vector<uint256> vMerkleTree;

    // Add regular transactions
    for (const auto& txid : vtx) {
        vMerkleTree.push_back(txid.GetHash());
    }

    // Add evidence transactions
    for (const auto& tx : vEvidenceTx) {
        vMerkleTree.push_back(tx.GetHash());
    }

    // Calculate Merkle root
    hashMerkleRoot = ComputeMerkleRoot(vMerkleTree);
}
