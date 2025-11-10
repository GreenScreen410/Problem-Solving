# [Bronze III] Just a Joystick - 30314 

[문제 링크](https://www.acmicpc.net/problem/30314) 

### 성능 요약

메모리: 32412 KB, 시간: 84 ms

### 분류

그리디 알고리즘, 문자열

### 제출 일자

2025년 11월 10일 10:09:23

### 문제 설명

<p>You just got the high score when playing <em>Battlezone Asteroids Pac-Centipede</em> on an arcade machine! On the "Game Over" screen, you can enter your initials, one letter at a time. This seems to be a very modern arcade machine: whereas the original arcade machines only allowed entering three initials, this machine allows many more. However, to select the letters, you have access to just a joystick. For every letter, you need to move the joystick up or down to cycle between the letters (wrapping around between '<code>Z</code>' and '<code>A</code>', in both directions) and move it to the right to move to the next letter.</p>

<p>It appears that the initials of the previous high-score winner are still filled in. Entering your own initials is going to take some time, and you want to know exactly how long. How many times do you need to you move the joystick up or down to enter your own initials, if you do so in the most efficient way?</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer $n$ ($1 \leq n \leq 10^5$), the number of letters available to enter your initials.</li>
	<li>One line with a string of length $n$, the initials of the previous high-score winner.</li>
	<li>One line with a string of length $n$, the initials that you want to enter.</li>
</ul>

<p>The strings only consist of English uppercase letters (<code>A-Z</code>).</p>

### 출력 

 <p>Output the minimum number of times you should move the joystick up or down to enter your own initials. This does <em>not</em> include the number of times that you need to move the joystick to the right.</p>

