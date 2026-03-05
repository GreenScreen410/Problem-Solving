# [Unrated] Hacker - 13969 

[문제 링크](https://www.acmicpc.net/problem/13969) 

### 성능 요약

메모리: 2236 KB, 시간: 180 ms

### 분류

분류 없음

### 제출 일자

2026년 3월 5일 11:41:34

### 문제 설명

<p>A hacker has gained access to Miltos’s e-mail account once again. Being fed up with all the intrusions, Miltos finally decides to change his password to a significantly stronger one. In order to do that, he has devised certain criteria that measure the complexity of the password (for example, the amount of repetitiveness), as well as some transformations that hopefully make the password more complex. You are given his old password, W, consisting of N lowercase latin letters. Miltos makes a new password, which initially is just a copy of the old one, and applies a number of changes to it.</p>

<p>Miltos uses three kinds of operations and has asked you to give him valuable information by simulating them. He gives you a list of Q operations of the following kinds:</p>

<ul>
	<li><code>1 i j k</code>: Check if the substring between positions i and j (inclusive) of the new password is equal to the substring beginning at position k of the new password and having length j - i + 1. If yes, print “Y”, else print “N”.</li>
	<li><code>2 i j k</code>: Replace the substring that is formed between positions i and j (inclusive) of the new password, with the substring starting at position k of the old password (W) and having length j − i + 1.</li>
	<li><code>3 i j</code>: Replace all letters in the substring between i and j (inclusive) of the new password with the next letter, in a circular fashion. That is, replace “a” with “b”, “b” with “c”, …, and “z” with “a”, for all occurrences of each letter in the substring.</li>
</ul>

<p>Note that all indices start from 1 (i.e., 1 ≤ i, j, k ≤ N). It is guaranteed that all positions i, j, k are valid. Note also that the length of the new password does not change (it is always equal to N).</p>

### 입력 

 <p>In the first line of the input the old password is given. In the second line the number Q is given and in the next Q lines the operations to simulate are given, each on a separate line.</p>

### 출력 

 <p>The output should be the answers to the operations of type 1, each answer (“Y” or “N”) in a separate line.</p>

