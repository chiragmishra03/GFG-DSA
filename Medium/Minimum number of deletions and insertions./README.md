<h2><a href="https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article">Minimum number of deletions and insertions.</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: text;"><p style="user-select: text;"><span style="font-size: 18px; user-select: text;">Given two strings <strong style="user-select: text;">str1</strong> and <strong style="user-select: text;">str2</strong>. The task is to remove or insert the minimum number of characters from/in <strong style="user-select: text;">str1</strong> so as to transform it into <strong style="user-select: text;">str2</strong>. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.</span></p>
<p style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Example 1:</strong></span></p>
<pre style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Input: </strong>str1 = "heap", str2 = "pea"
<strong style="user-select: text;">Output:</strong> 3
<strong style="user-select: text;">Explanation: </strong>2 deletions and 1 insertion</span>
<strong style="user-select: text;"><span style="font-size: 18px; user-select: text;">p</span></strong><span style="font-size: 18px; user-select: text;"> and <strong style="user-select: text;">h</strong> deleted from <strong style="user-select: text;">heap</strong>. Then, <strong style="user-select: text;">p</strong> is 
inserted at the beginning One thing to 
note, though <strong style="user-select: text;">p</strong> was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, <strong style="user-select: text;">p</strong> contributes one to the 
<strong style="user-select: text;">deletion_count</strong> and one to the 
<strong style="user-select: text;">insertion_count</strong>.</span></pre>
<p style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Example 2:</strong></span></p>
<pre style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Input : </strong>str1 = "geeksforgeeks"
str2 = "geeks"
<strong style="user-select: text;">Output: </strong>8
<strong style="user-select: text;">Explanation: </strong>8 deletions</span>
</pre>
<p style="user-select: text;">&nbsp;</p>
<p style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Your Task:</strong><br style="user-select: text;">You don't need to read or&nbsp;print anything. Your task is to complete the function <strong style="user-select: text;">minOperations()&nbsp;</strong>which takes both strings as input parameter and returns the minimum number of operation required.</span></p>
<p style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Expected Time Complexity:&nbsp;</strong>O(|str1|*|str2|)<br style="user-select: text;"><strong style="user-select: text;">Expected Space Complexity: </strong>O(|str1|*|str2|</span><span style="font-size: 18px; user-select: text;">)</span></p>
<p style="user-select: text;"><span style="font-size: 18px; user-select: text;"><strong style="user-select: text;">Constraints:</strong><br style="user-select: text;">1 ≤ |str1|, |str2| ≤ 1000</span><br style="user-select: text;"><span style="font-size: 18px; user-select: text;">All the characters are lower case English alphabets</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;