# [Platinum I] Text Editor - 17347 

[문제 링크](https://www.acmicpc.net/problem/17347) 

### 성능 요약

메모리: 5776 KB, 시간: 104 ms

### 분류

자료 구조, 문자열, 로프

### 제출 일자

2026년 3월 3일 14:45:13

### 문제 설명

<p>A long, long time ago, DOS3.x programmers were starting to get tired of EDLIN. So they gradually switched to editors that they wrote themselves.</p>

<p>Many years later, Alex has accidentally stumbled upon a text editor from back in these days. After some basic testing, he has made a shocking discovery: this software is able to perform tens of thousands of edit operations per second (of course, you cannot conduct these tests by hand)! So, Alex is spending sleepless nights trying to create a product like this himself. Can you help him?</p>

<p>To clarify the objective, Alex has created some definitions to make the term "text editor" less abstract:</p>

<ul>
	<li><b>text</b>: a sequence formed using 0 or more ASCII characters with values in the inclusive range [32, 126] (i.e. spaces and visible characters).</li>
	<li><b>cursor</b>: a mark within a block of text to indicate a position. It may be positioned at the beginning of the text, the end of the text, or between any two adjacent characters in the text.</li>
	<li><b>text editor</b>: a program containing a block of text and a single cursor, capable of performing the following six operations. If the block of text is empty, we will consider the text editor to be empty.</li>
</ul>

<table align="center" class="table table-bordered" id="operations">
	<tbody>
		<tr>
			<th>Operation</th>
			<th>Input Format</th>
			<th>Function</th>
		</tr>
		<tr>
			<td>Move(k)</td>
			<td><code>Move k</code></td>
			<td>Moves the cursor's position to immediately after the <var>k</var>-th character in the text. If <var>k</var>= 0, then the cursor is moved to the start of the text.</td>
		</tr>
		<tr>
			<td>Insert(<var>n</var>, <var>s</var>)</td>
			<td><code>Insert n↵ 			s</code></td>
			<td>Inserts a string <var>s</var> of length <var>n</var> (<var>n</var> ≥ 1) at the position of the cursor. The position of the cursor does not change.</td>
		</tr>
		<tr>
			<td>Delete(<var>n</var>)</td>
			<td><code>Delete n</code></td>
			<td>Delete the <var>n</var> (<var>n</var> ≥ 1) characters following the cursor. The position of the cursor does not change.</td>
		</tr>
		<tr>
			<td>Get(<var>n</var>)</td>
			<td><code>Get n</code></td>
			<td>Outputs the <var>n</var> (<var>n</var> ≥ 1) characters following the cursor. The position of the cursor does not change.</td>
		</tr>
		<tr>
			<td>Prev</td>
			<td><code>Prev</code></td>
			<td>Moves the cursor backwards by one character.</td>
		</tr>
		<tr>
			<td>Next</td>
			<td><code>Next</code></td>
			<td>Moves the cursor forwards by one character.</td>
		</tr>
	</tbody>
</table>

<p>For example, an empty text editor when given the operations: Insert(13, "<code>Balanced tree</code>"), Move(2), Delete(5), Next(), Insert(7, "<code>editor</code>"), Move(0), and Get(16), will output "<code>Bad editor tree</code>".</p>

<p>Your task is to:</p>

<ul>
	<li>Create an empty text editor.</li>
	<li>Read some operations from the input and execute them.</li>
	<li>For each Get() operation, output the correct contents.</li>
</ul>

### 입력 

 <p>The first line of input contains an integer <var>t</var>, the number of operations. The following lines contain <var>t</var> operations. To make text from the text editor easier to read, the string following the Insert() operation may contain multiple line breaks. You must ignore them (if this is hard to understand, please refer to the sample input and output below). Other than new line characters, all of the characters in the input will have ASCII values within the range [32, 126], inclusive. There will be no trailing spaces.</p>

<p>You can assume that for each test case:</p>

<ul>
	<li>The number of Move() operations will not exceed 50000. The total number of Insert() and Delete() operations will not exceed 4000. The total number of Prev() and Next() operations will not exceed 200000.</li>
	<li>The number of characters inserted in each Insert() operation will not exceed 2M (1M = 1024×1024). The length of the correct output will not exceed 3M.</li>
	<li>For each Delete() and Get() operation, there will always be sufficient characters following the cursor. The Move(), Prev(), and Next() operations will never move the cursor to an invalid position.</li>
	<li>All operations will be valid.</li>
</ul>

### 출력 

 <p>Each line of the output should contain the text outputted by a single corresponding Get() operation.</p>

