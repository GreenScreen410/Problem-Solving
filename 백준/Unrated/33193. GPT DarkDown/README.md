# [Unrated] GPT DarkDown - 33193 

[문제 링크](https://www.acmicpc.net/problem/33193) 

### 성능 요약

메모리: 35296 KB, 시간: 320 ms

### 분류

구현

### 제출 일자

2025년 11월 25일 19:15:03

### 문제 설명

<p>Mahdieh is a developer working on a chatbot for Divar’s open platform (Kenar Divar). She wants to use ChatGPT’s API for her chatbot. This means the chatbot receives messages from ChatGPT and forwards them to the user. When the chatbot asks ChatGPT to generate a message, ChatGPT sends the message in chunks to the chatbot. So for each chunk, there is a time when Mahdieh’s chatbot receives it, and there is a string it contains.</p>

<p>For a smooth user experience, Mahdieh wants her chatbot to simulate continuous typing, outputting 1 character per millisecond. Obviously, no character can be typed before it is received, so Mahdieh must ensure that the current typing character is available for her chatbot before typing it. To make the perfect smooth user experience she wants to see in her chatbot, the chatbot waits for a while without typing anything, and then starts typing non-stop. Now Mahdieh has all the chunks’ information from a hypothetical message, and she needs your help to tell her the first time the chatbot can start to type.</p>

<p>However, ChatGPT (and therefore Mahdieh’s chatbot) applies <strong>Darkdown</strong> formatting to the chunks of text, which includes <strong>bold</strong>, <em>italic</em>, <code>inline code</code>, and even emojis! 😄</p>

<p>So, there are formatting characters in the received message from ChatGPT that will not be rendered in the final text. You need to determine only the (visible) rendered content for smooth typing. For example, the Darkdown text “<code>[Let's] (Code!) :rocket:</code>” consists of <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>24</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$24$</span></mjx-container> characters, but its rendered text is only <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>13</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$13$</span></mjx-container> characters long: “<em>Let's</em> <strong>Code!</strong> 🚀”.</p>

<p>Your task is to determine the earliest time Mahdieh can start typing the rendered output for a smooth experience.</p>

### 입력 

 <p>The input starts with a line containing a single integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$k$</span></mjx-container>, as the number of chunks (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le k \le 10^5$</span></mjx-container>). The next <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$k$</span></mjx-container> lines contain the complete input message, where every line represents a non-empty chunk. You can assume the ChatGPT message does not contain newline characters, and the chunks could start or end with spaces. It is guaranteed that the total number of characters in all the chunks combined will not exceed <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^5$</span></mjx-container>, and the final rendered message will not be empty. The last line contains <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$k$</span></mjx-container> spaceseparated integers, <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="2"><mjx-c class="mjx-c2026"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="2"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>t</mi><mn>1</mn></msub><mo>,</mo><msub><mi>t</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>t</mi><mi>k</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$t_1, t_2, \dots , t_k$</span></mjx-container>, where <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>t</mi><mi>i</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$t_i$</span></mjx-container> is the time the chatbot receives the <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$i$</span> </mjx-container><sup>th</sup> chunk from ChatGPT (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c22EF"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><msub><mi>t</mi><mn>1</mn></msub><mo><</mo><msub><mi>t</mi><mn>2</mn></msub><mo><</mo><mo>⋯</mo><mo><</mo><msub><mi>t</mi><mi>k</mi></msub><mo>≤</mo><msup><mn>10</mn><mn>9</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le t_1 < t_2 < \cdots < t_k \le 10^9$</span></mjx-container>).</p>

<p>The ChatGPT message has the following <strong>Darkdown</strong> formatting:</p>

<ul>
	<li><strong>Inline Code Blocks</strong>:

	<ul>
		<li>Inline code is given inside a pair of backtick characters, e.g. <code>'code'</code>. The backtick charcters themselves are not rendered in the final output. You can assume there is no backtick characters inside the inline code.</li>
		<li>Formatting markers inside inline code blocks (like <code>(</code> or <code>\</code>) are rendered as literal characters and are not parsed as formatting.</li>
	</ul>
	</li>
	<li><strong>Special Characters</strong>:
	<ul>
		<li>In order to render the special characters (<code>(</code>, <code>)</code>, <code>[</code>, <code>]</code>, <code>:</code>, <code>\</code>, <code>'</code>), it is sufficient to escape them by preceding them with a backslash character (e.g. <code>\(</code>, <code>\)</code>, <code>\[\]</code>, <code>\]</code>, <code>\:</code>, <code>\\</code>, <code>\'</code>).</li>
		<li>Double backslashes (<code>\\</code>) are rendered as a single literal backslash in the visible output.</li>
		<li>It is guaranteed that every backslash in the input is followed by a special character, except in inline codes and after an escaped backslash (<code>\\</code>).</li>
	</ul>
	</li>
	<li><strong>Bold and Italic Formatting</strong>:
	<ul>
		<li>Bold formatting can be applied by enclosing the text with parentheses: <code>(bold)</code>.</li>
		<li>Italic formatting can be applied by enclosing the text with square brackets: <code>[italic]</code>.</li>
		<li>It is not permitted to have nested blocks of bold or italic text. Also, a block of text cannot be simultaneously bold and italic. For example, it is not allowed to have <code>[(bold and italic) italic]</code> or <code>((superbold) bold)</code>.</li>
		<li>Inline codes or emojis are allowed inside a bold or italic text.</li>
	</ul>
	</li>
	<li><strong>Emojis</strong>:
	<ul>
		<li>An emoji is given as a non-empty string of lowercase English letters enclosed within a pair of colons (e.g. <code>:smile:</code>, <code>:rocket:</code>).</li>
	</ul>
	</li>
	<li><strong>Punctuation and Spaces</strong>:
	<ul>
		<li>All standard punctuation marks (<code>.</code>, <code>,</code>, <code>!</code>, <code>?</code>, <code>'</code>, <code>-</code>, <code>/</code>) and space characters are rendered normally.</li>
	</ul>
	</li>
</ul>

<p>It is guaranteed that the input adheres strictly to the Darkdown formatting rules described above, and the final rendered text is unique.</p>

<p>In order to find the answer, you have to consider only the visible (rendered) characters, which include:</p>

<ul>
	<li><strong>Plain text</strong>: All letters, numbers, spaces, escaped special characters, and standard punctuation marks not part of any formatting.</li>
	<li><strong>Emojis</strong>: Represented as a single conceptual character. For example, <code>:smile:</code> is rendered as 😄. Note that the conceptual character for an emoji is ready for typing when the chatbot has received its ending colon (<code>:</code>).</li>
	<li><strong>Inline Code</strong>: The content inside backtick characters.</li>
</ul>

### 출력 

 <p>Output the earliest time Mahdieh’s chatbot can start typing the message such that the chatbot prints the whole text smoothly.</p>

