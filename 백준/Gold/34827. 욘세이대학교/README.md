# [Gold V] 욘세이대학교 - 34827 

[문제 링크](https://www.acmicpc.net/problem/34827) 

### 성능 요약

메모리: 32412 KB, 시간: 1056 ms

### 분류

구현, 문자열, 브루트포스 알고리즘

### 제출 일자

2025년 11월 30일 18:51:02

### 문제 설명

<p><span style="color:#e74c3c;"><code>YONSEI</code></span> 라는 단어를 보고, 형진이는 무의식적으로 <strong>욘세이</strong>라고 읽어버렸다. 문득 궁금해졌다. 왜 연세대학교에서 <strong>연세</strong>가 <span style="color:#e74c3c;"><code>YONSEI</code></span> 일까?</p>

<p>잠깐 고민해본 형진이는, 순식간에 한 가지를 깨달을 수 있었다. 바로, <span style="color:#e74c3c;"><code>YONSEI</code></span> 라는 단어는 <strong>멋이 있다</strong>는 것이다! 반면, <span style="color:#e74c3c;"><code>YUNSE</code></span> 는 약간 멋이 없는 것 같기도 하다. (전적으로 형진이의 기준이다.)</p>

<p>형진이의 기준에, 영단어들은 <strong>멋이 있는</strong> 영단어가 있고, <strong>멋이 없는</strong> 영단어가 있다는 것을 알게 됐다.</p>

<p>형진이가 제안한 <strong>멋이 있는 단어</strong>는 다음과 같다:</p>

<ul>
<li>단어는 알파벳 대문자만으로 이루어져 있다.</li>
<li>각 단어에 포함된 모든 문자는 1회만 사용된다.</li>
<li>단어에서 인접한 두 문자에 대해서, 앞에 있는 문자가 사전순으로 나열했을 때 더 앞에 있는 횟수를 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$X$</span></mjx-container>, 뒤에 있는 문자가 사전순으로 나열했을 때 더 앞에 있는 횟수를 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>Y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$Y$</span></mjx-container>라고 하자. 이 때, <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">|</mo><mi>X</mi><mo>−</mo><mi>Y</mi><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>≤</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$|X-Y| \leq 1$</span></mjx-container>을 만족한다.</li>
</ul>

<p>대표적으로, <code><span style="color:#e74c3c;">YUNSE</span></code> 는 형진이의 기준에 멋이 없는 단어이다. <span style="color:#e74c3c;"><code>YUNSE</code></span> 문자열에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi><mo>=</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$X = 1$</span></mjx-container> (<span style="color:#e74c3c;"><code>NS</code></span>), <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>Y</mi><mo>=</mo><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$Y = 3$</span></mjx-container> (<span style="color:#e74c3c;"><code>YU</code></span>, <span style="color:#e74c3c;"><code>UN</code></span>, <span style="color:#e74c3c;"><code>SE</code></span>)이다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">|</mo><mi>X</mi><mo>−</mo><mi>Y</mi><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>=</mo><mn>2</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$|X-Y| = 2$</span></mjx-container>이므로, 해당 단어는 멋이 없는 단어이다.</p>

<p>반면, <span style="color:#e74c3c;"><code>YONSEI</code></span> 는 형진이의 기준에 멋이 있는 단어이다. <span style="color:#e74c3c;"><code>YONSEI</code></span> 문자열에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi><mo>=</mo><mn>2</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$X = 2$</span></mjx-container> (<span style="color:#e74c3c;"><code>NS</code></span>, <span style="color:#e74c3c;"><code>EI</code></span>), <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>Y</mi><mo>=</mo><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$Y = 3$</span></mjx-container> (<span style="color:#e74c3c;"><code>YO</code></span>, <span style="color:#e74c3c;"><code>ON</code></span>, <span style="color:#e74c3c;"><code>SE</code></span>)이다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">|</mo><mi>X</mi><mo>−</mo><mi>Y</mi><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>=</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$|X-Y| = 1$</span></mjx-container>이므로, 해당 단어는 멋이 있는 단어이다.</p>

<p>특정한 단어가 주어졌을 때, 해당 단어를 접두사로 하는 <strong>가장 짧은 멋이 있는 단어</strong>를 하나 구성해서 출력해보자. 만약 가장 짧은 멋있는 단어가 여러 개라면, 그중 아무거나 출력한다.</p>

### 입력 

 <p>첫째 줄에 단어의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 입력으로 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>5</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\le N \le 5$</span></mjx-container>)</p>

<p>둘째 줄에 단어가 입력으로 주어진다. 단어는 모두 알파벳 대문자로 이루어져 있으며, 주어지는 단어에 있는 모든 문자는 서로 다르다.</p>

### 출력 

 <p>첫째 줄에 주어진 단어를 접두사로 하는 가장 짧은 멋있는 단어의 길이를 출력한다.</p>

<p>둘째 줄에 그 단어를 출력한다.</p>

