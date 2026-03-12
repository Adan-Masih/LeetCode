class Solution(object):
    def fairCandySwap(self, aliceSizes, bobSizes):
        SA = sum(aliceSizes)
        SB = sum(bobSizes)

        diff = (SA - SB) // 2

        alice_set = set(aliceSizes)

        for y in bobSizes:
            x = y + diff
            if x in alice_set:
                return [x, y]