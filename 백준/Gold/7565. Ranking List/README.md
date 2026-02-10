# [Gold V] Ranking List - 7565 

[문제 링크](https://www.acmicpc.net/problem/7565) 

### 성능 요약

메모리: 32412 KB, 시간: 300 ms

### 분류

구현, 정렬, 문자열

### 제출 일자

2026년 2월 11일 02:43:15

### 문제 설명

<p>We knew something would be missing. We have just noticed that we do not have a tool helping us with the ranking list for this programming contest, and if we tried to create it by hand, you would probably end up waiting for the results until Sunday. So please help us out here, will you?</p>

<p>Your task is to write a program that determines the ranking list for a programming contest. You are given a list of the participating teams and a log file describing all the solutions submitted by the teams.</p>

<p>The scoring of this programming contest is based on the following set of rules:</p>

<ol>
	<li>The Contest Judges are solely responsible for determining the correctness of submitted runs. The winners of the Contest are determined by the Contest Judges and the Contest Director. The Contest Judges are empowered to adjust for or adjudicate unforeseen events and conditions.</li>
	<li>Teams will be ranked by the total number of correct solutions. For the purpose of awards, or in determining qualifier(s) for the ACM Contest, teams who solve the same number of problems are ranked by least total time. If this results in a draw situation the least number of attempts for each solved problems are taken into account. First the number of submissions for the problem with the most attempts are compared.</li>
	<li>The total time is the sum of the time consumed for each problem solved. The time consumed for a solved problem is the time elapsed from the beginning of the contest to the submittal of the accepted run plus 20 penalty minutes for every rejected run for that problem regardless of submittal time. There is no time consumed for a problem that is not solved.</li>
</ol>

<p>We are sure that you know all this. However, we think that the provisions of the second rule for resolving a draw situation are somewhat obscure, so that we do not want your program to implement such a procedure. Instead, if there is a draw situation of two or more teams with the same total number of correct solutions and the same total time, assign the same rank to these teams and list them in alphabetical order. Their relative ranking will be determined by the contest director, based on the number of attempts for each solved problems or the earliest problem solved.</p>

<p>As we want the rank r of a team to indicate that r −1 teams did better, we need to adjust the numbers in a draw situation. If, for example, the two best teams’ numbers of solved problems and total times coincide, they would both get rank 1, while the next team would be assigned rank 3. In this example, nobody would be assigned rank 2 by your program.</p>

<p>We also have an addition to the third rule: There will be no penalty for incorrect solutions submitted after a correct solution was accepted from the same team.</p>

### 입력 

 <p>The first line contains the number of scenarios.</p>

<p>For each scenario, you find the number n, 1 ≤ n ≤ 20, of teams in the first line and the (unique) names of the teams in the n following lines. A team name is a single word of length at most 8 containing letters and digits only, and for your convenience the teams are listed in alphabetical order. The next line contains the number k of problems and the number m of solutions that were submitted (1 ≤ k < 10, 0 ≤ m ≤ 2000). Each of the following m lines describes one such solution, in the format “problem time correctness team”, where 1 ≤ problem ≤ k is the number of the problem, 0 ≤ time < 300 is the number of minutes elapsed since the contest was started, correctness is either “Yes” or “No” and team is the name of the team that submitted the solution. You can assume that the lines in the log file are sorted by time.</p>

### 출력 

 <p>For each scenario print a ranking list containing every team that participated in the contest. The format is “rank. team solved time”, where rank is the rank, team the name of the team, solved the number of correct solutions, and time the total time. In addition to the single blanks separating these four fields, make the table look nice by using a field width of 2 for the rank, 8 for the team’s name, 1 for the number of problems solved and 4 for the total time (name left-adjusted, numbers right-adjusted, see sample output). Each scenario ends with a blank line.</p>

