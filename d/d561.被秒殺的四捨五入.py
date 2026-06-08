import sys
from decimal import Decimal, ROUND_HALF_UP

for line in sys.stdin:
    val = Decimal(line.strip())

    result = val.quantize(Decimal("0.01"), rounding=ROUND_HALF_UP)
    if result == 0:
        result = abs(result)

    print(f"{result:.2f}")
