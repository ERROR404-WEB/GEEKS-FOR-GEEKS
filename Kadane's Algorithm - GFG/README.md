# Kadane's Algorithm
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr[]&nbsp;</strong>of <strong style="user-select: auto;">N</strong> integers. Find the contiguous sub-array(containing at least one number) which has the&nbsp;maximum sum and return its sum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
Arr[] = {1,2,3,-2,5}
<strong style="user-select: auto;">Output:
</strong>9<strong style="user-select: auto;">
Explanation:
</strong>Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
Arr[] = {-1,-2,-3,-4}
<strong style="user-select: auto;">Output:
</strong>-1<strong style="user-select: auto;">
Explanation:
</strong>Max subarray sum is -1 
of element (-1)</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.&nbsp;The task is to complete the function <strong style="user-select: auto;">maxSubarraySum</strong>() which takes Arr[] and N as input parameters and returns the sum of&nbsp;subarray with maximum sum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">7</sup> ≤ A[i] ≤ 10<sup style="user-select: auto;">7</sup></span></p>
</div>