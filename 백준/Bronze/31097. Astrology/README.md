# [Bronze III] Astrology - 31097 

[문제 링크](https://www.acmicpc.net/problem/31097) 

### 성능 요약

메모리: 32412 KB, 시간: 32 ms

### 분류

구현, 많은 조건 분기

### 제출 일자

2025년 11월 9일 16:19:12

### 문제 설명

<p>The famous astrologer Pavel Globus writes a bot for trading stocks in the stock market. Pavel is going to predict the stock price <em>by the stars</em>. He analyzed historical data and noticed that, for example, when Mars was in Capricorn, the stock price fell, and when the moon was in Gemini, the quotes went up. Of course, Pavel will not reveal all the details of his algorithm.</p>

<p>Pavel is not so good at programming, and one of the parts of the program that he cannot cope with is determining the zodiac sign, in which the Sun is located, depending on the current date. The zodiac sign for the current date can be determined from the following table:</p>

<table class="table table-bordered table-center-50 td-center">
	<tbody>
		<tr>
			<td><code>Aries</code></td>
			<td>March 21 --- April 19</td>
		</tr>
		<tr>
			<td><code>Taurus</code></td>
			<td>April 20 --- May 20</td>
		</tr>
		<tr>
			<td><code>Gemini</code></td>
			<td>May 21 --- June 20</td>
		</tr>
		<tr>
			<td><code>Cancer</code></td>
			<td>June 21 --- July 22</td>
		</tr>
		<tr>
			<td><code>Leo</code></td>
			<td>July 23 --- August 22</td>
		</tr>
		<tr>
			<td><code>Virgo</code></td>
			<td>August 23 --- September 22</td>
		</tr>
		<tr>
			<td><code>Libra</code></td>
			<td>September 23 --- October 22</td>
		</tr>
		<tr>
			<td><code>Scorpio</code></td>
			<td>October 23 --- November 22</td>
		</tr>
		<tr>
			<td><code>Sagittarius</code></td>
			<td>November 23 --- December 21</td>
		</tr>
		<tr>
			<td><code>Capricorn</code></td>
			<td>December 22 --- January 19</td>
		</tr>
		<tr>
			<td><code>Aquarius</code></td>
			<td>January 20 --- February 18</td>
		</tr>
		<tr>
			<td><code>Pisces</code></td>
			<td>February 19 --- March 20</td>
		</tr>
	</tbody>
</table>

<p>Help Pavel and write a program that determines the zodiac sign by the current date. Pavel, in return, will help you increase your capital.</p>

### 입력 

 <p>You are given a string in format <<<code>YYYY-MM-DD</code>>>, indicating the current date, where <code>YYYY</code> --- year ($2021 \le$ <code>YYYY</code> $\le 2050$), <code>MM</code> --- month ($01 \le$ <code>MM</code> $\le 12$), and <code>YYYY</code> --- day ($01 \le$ <code>DD</code> $\le 31$).</p>

<p>The date is real.</p>

### 출력 

 <p>Print one of the words from the list <<<code>Aries</code>>>, <<<code>Taurus</code>>>, <<<code>Gemini</code>>>, <<<code>Cancer</code>>>, <<<code>Leo</code>>>, <<<code>Virgo</code>>>, <<<code>Libra</code>>>, <<<code>Scorpio</code>>>, <<<code>Sagittarius</code>>>, <<<code>Capricorn</code>>>, <<<code>Aquarius</code>>>, <<<code>Pisces</code>>>, corresponding to the zodiac sign.</p>

