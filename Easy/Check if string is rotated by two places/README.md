<h2><a href="https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1">Check if string is rotated by two places</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings <strong style="user-select: auto;">a </strong>and <strong style="user-select: auto;">b</strong>. The task is to find if the string 'b' can be obtained by rotating</span><span style="font-size: 18px; user-select: auto;">&nbsp;</span><span style="font-size: 18px; user-select: auto;">(<strong style="user-select: auto;">in any direction</strong>)</span><span style="font-size: 18px; user-select: auto;"> </span><span style="font-size: 18px; user-select: auto;">string 'a' by </span><strong style="font-size: 18px; user-select: auto;">exactly 2</strong><span style="font-size: 18px; user-select: auto;"> places.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>a = amazon
b = azonam
<strong style="user-select: auto;">Output: <br style="user-select: auto;"></strong>1<strong style="user-select: auto;">
Explanation: <br style="user-select: auto;"></strong>amazon can be rotated anti-clockwise by two places, which will make it as azonam.</span>
</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>a = geeksforgeeks
b = geeksgeeksfor
<strong style="user-select: auto;">Output: <br style="user-select: auto;"></strong>0<strong style="user-select: auto;">
Explanation: <br style="user-select: auto;"></strong>If we rotate geeksforgeeks by two place in any direction, we won't get geeksgeeksfor.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">The task is to complete the function&nbsp;<strong style="user-select: auto;">isRotated()</strong> which takes two strings as input parameters and&nbsp;checks if given strings can be formed by rotations. The function returns&nbsp;true&nbsp;if string 1 can be obtained by rotating string 2 by two places, else it returns&nbsp;false.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxilary Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;"><strong style="user-select: auto;">Challenge: </strong>Try doing it in O(1) space complexity.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ length of a, b ≤ 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;