quant = int(input())
for c in range(0, quant):
    nums = input().split()
    p2 = float(nums[0])
    p3 = float(nums[1])
    p5 = float(nums[2])
    media = ((p2 * 2) + (p3 * 3) + (p5 * 5)) / 10
    print(f'{media:.1f}')