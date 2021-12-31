<h2>282. Expression Add Operators</h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">num</code> that contains only digits and an integer <code style="user-select: auto;">target</code>, return <em style="user-select: auto;"><strong style="user-select: auto;">all possibilities</strong> to insert the binary operators </em><code style="user-select: auto;">'+'</code><em style="user-select: auto;">, </em><code style="user-select: auto;">'-'</code><em style="user-select: auto;">, and/or </em><code style="user-select: auto;">'*'</code><em style="user-select: auto;"> between the digits of </em><code style="user-select: auto;">num</code><em style="user-select: auto;"> so that the resultant expression evaluates to the </em><code style="user-select: auto;">target</code><em style="user-select: auto;"> value</em>.</p>

<p style="user-select: auto;">Note that operands in the returned expressions <strong style="user-select: auto;">should not</strong> contain leading zeros.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "123", target = 6
<strong style="user-select: auto;">Output:</strong> ["1*2*3","1+2+3"]
<strong style="user-select: auto;">Explanation:</strong> Both "1*2*3" and "1+2+3" evaluate to 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "232", target = 8
<strong style="user-select: auto;">Output:</strong> ["2*3+2","2+3*2"]
<strong style="user-select: auto;">Explanation:</strong> Both "2*3+2" and "2+3*2" evaluate to 8.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "3456237490", target = 9191
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There are no expressions that can be created from "3456237490" to evaluate to 9191.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= num.length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">num</code> consists of only digits.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= target &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>