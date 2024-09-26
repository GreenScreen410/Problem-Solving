# [Diamond IV] AI - 18640 

[문제 링크](https://www.acmicpc.net/problem/18640) 

### 성능 요약

메모리: 53132 KB, 시간: 116 ms

### 분류

휴리스틱, 런타임 전의 전처리, 문자열

### 제출 일자

2024년 9월 26일 14:18:51

### 문제 설명

<p><em>Text generation</em> is one of the important tasks in the AI world. The criteria for success are usually based on generated texts being indistinguishable from texts written by humans.</p>

<p>In this problem, you need to generate phrases which look like ones humans came up with. More precisely, your program needs to print n distinct strings, out of which at least 90% appear as titles of articles in the German Wikipedia. Even more precisely, at least 90% of the strings you print need to appear as lines in the text file available at <a href="http://opentrains.mipt.ru/wikinames.dat">http://opentrains.mipt.ru/wikinames.dat</a> (obtained by unpacking <a href="https://startl.ink/3cgCuco">https://startl.ink/3cgCuco</a>).</p>

<p>The size of the unpacked file is 72036684 bytes, and it has 3828917 lines. You are allowed to download and analyze it on your computer during the contest, but the solution you submit must not access the network.</p>

<p>The strings will be compared for exact equality, byte-for-byte.</p>

<p>The source code size limit for this problem is 100000 bytes.</p>

### 입력 

 <p>The only line of the input contains a single integer n, n = 3 (sample case) or n = 50000 (the only non-sample case).</p>

### 출력 

 <p>Output n lines. The lines should be distinct, and at least 0.9 · n of them (rounded up) need to be equal to one of the 3828917 lines of the text file mentioned above.</p>

