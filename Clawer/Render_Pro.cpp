#include <bits/stdc++.h>

using namespace std;

string mstr, id, title, description, input_format, output_format;

string sample_input, sample_output, hint, time_limit, memory_limit;

int main(int argc, char const* argv[])
{
	char c = getchar();
	while (c != EOF) mstr.push_back(c), c = getchar();
	size_t pos = mstr.find("\t"), pos2;
	while (pos != string::npos)
	{
		mstr.replace(pos, 1, "");
		pos = mstr.find("\t");
	}
	pos = mstr.find("<center><h2>") + 12;
	while (mstr[pos] != ':') id.push_back(mstr[pos]), pos++;
	pos += 2;
	while (mstr[pos] != '<') title.push_back(mstr[pos]), pos++;
	pos = mstr.find("Description</h2><div class=content>") + 35;
	pos2 = mstr.find("</div><h2>Input</h2>");
	while (pos < pos2) description.push_back(mstr[pos++]);
	pos = pos2 + 20;
	pos2 = mstr.find("<h2>Output</h2>");
	while (pos < pos2) input_format.push_back(mstr[pos++]);
	pos = pos2 + 15;
	pos2 = mstr.find("<h2>Sample Input</h2>");
	while (pos < pos2) output_format.push_back(mstr[pos++]);
	pos = pos2 + 21;
	pos2 = mstr.find("<h2>Sample Output</h2>");
	while (pos < pos2) sample_input.push_back(mstr[pos++]);
	pos = pos2 + 22;
	pos2 = mstr.find("<h2>HINT</h2>");
	while (pos < pos2) sample_output.push_back(mstr[pos++]);
	pos = pos2 + 13;
	pos2 = mstr.find("<h2>Source</h2>");
	while (pos < pos2) hint.push_back(mstr[pos++]);
	pos = mstr.find("Memory Limit: </span>") + 21;
	while (isdigit(mstr[pos])) memory_limit.push_back(mstr[pos++]);
	pos = mstr.find("Time Limit: </span>") + 19;
	while (isdigit(mstr[pos])) time_limit.push_back(mstr[pos++]);
	cout << "<html><head><link rel=\"icon\" href=\"../image/logo32x32.png\" sizes=\"32x32\" /><link rel=\"icon\" href=\"../image/logo192x192.png\" sizes=\"192x192\" /><link rel=\"stylesheet\" type=\"text/css\" href=\"../Semantic/semantic.min.css\"><script src=\"../Semantic/jquery.min.js\" type=\"text/javascript\"></script><script src=\"../Semantic/semantic.min.js\" type=\"text/javascript\"></script><title>" << title << "</title></head><body><div class=\"ui three item menu\"><a class=\"header item\" href=\"../index.html\"><img src=\"../image/logo.png\"> BZPRO</a></div><div class=\"ui main container\"><div class=\"ui center aligned grid\"><div class=\"row\"><h1 class=\"ui header\">#" << id << ". " << title << "</h1></div><div class=\"row\" style=\"margin-top: -15px\"><span class=\"ui label\">内存限制：" << memory_limit << " MiB</span> <span class=\"ui label\">时间限制：" << time_limit << " Sec</span></div></div><div class=\"ui grid\"><div class=\"row\"><div class=\"column\"><div class=\"ui buttons\"><a class=\"small ui primary button\" href=\"https://www.lydsy.com/JudgeOnline/submitpage.php?id=" << id << "\">提交</a> <a class=\"small ui positive button\" href=\"https://www.lydsy.com/JudgeOnline/problemstatus.php?id=" << id << "\">提交记录</a> <a class=\"small ui yellow button\" href=\"https://www.lydsy.com/JudgeOnline/wttl/wttl.php?pid=" << id << "\">讨论</a></div></div></div><div class=\"row\"><div class=\"column\"><h4 class=\"ui top attached block header\">题目描述</h4><div class=\"ui bottom attached segment font-content\"><div style=\"position: relative; overflow: hidden;\">" << description << "</div></div></div></div><div class=\"row\"><div class=\"column\"><h4 class=\"ui top attached block header\">输入格式</h4><div class=\"ui bottom attached segment font-content\"><div style=\"position: relative; overflow: hidden;\">" << input_format << "</div></div></div></div><div class=\"row\"><div class=\"column\"><h4 class=\"ui top attached block header\">输出格式</h4><div class=\"ui bottom attached segment font-content\"><div style=\"position: relative; overflow: hidden;\">" << output_format << "</div></div></div></div><div class=\"row\"><div class=\"column\"><h4 class=\"ui top attached block header\">样例</h4><div class=\"ui bottom attached segment font-content\"><div style=\"position: relative; overflow: hidden;\"><h4>样例输入</h4><div class=\"ui existing segment\"><pre style=\"margin-top:0; margin-bottom:0;\"><code class=\"lang-plain\">" << sample_input << "</code></pre></div><h4>样例输出</h4><div class=\"ui existing segment\"><pre style=\"margin-top:0; margin-bottom:0;\"><code class=\"lang-plain\">" << sample_output << "</code></pre></div></div></div></div></div><div class=\"row\"><div class=\"column\"><h4 class=\"ui top attached block header\">数据范围与提示</h4><div class=\"ui bottom attached segment font-content\"><div style=\"position: relative; overflow: hidden;\">" << hint << "</div></div></div></div></div></div><div class=\"ui vertical footer segment\"><div class=\"ui center aligned container\"><span style=\"color: #999;\">BZPRO Powered by <a href=\"http://www.k-xzy.xyz\">XZYQvQ</a>.</span></div></div></body></html>";
	return 0;
}
