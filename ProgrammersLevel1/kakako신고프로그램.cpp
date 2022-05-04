#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(void)
{
    vector<string> id_list = { "muzi", "frodo", "apeach", "neo" };
    vector<string> report = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };
    
    vector<vector<int>> reportBoard(id_list.size(), vector<int>(id_list.size(), 0));
    vector<int> reportCount(id_list.size(), 0);
    vector<int> reportMailCount(id_list.size(), 0);
    vector<string> vWord;

    int k = 1;

    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < report.size(); j++)
        {
            stringstream ss;
            ss.str(report[j]);

            string word;

            while (ss >> word) 
            {
                vWord.push_back(word);
            }

            //cout << vWord[0] << "\t가\t" << vWord[1] << "  \t를 신고했습니다." << endl;
            // vWord[0] : 신고자
            // vWord[1] : 신고 받은 자

            if (vWord[0].compare(id_list[i]) == 0)
            {
                for (int z = 0; z < id_list.size(); z++)
                {
                    if (vWord[1].compare(id_list[z]) == 0)
                    {
                        if (reportBoard[i][z] == 1)
                            break;

                        reportBoard[i][z] += 1;
                    }
                }
            }
            
            vWord.clear();
        }
    }

    cout << "신고 현황판" << endl;
    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < id_list.size(); j++)
        {
            cout << reportBoard[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n신고 받은 횟수" << endl;
    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < id_list.size(); j++)
        {
            reportCount[i] += reportBoard[j][i];
        }
    }

    for (int i = 0; i < id_list.size(); i++)
        cout << reportCount[i] << " ";
    

    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < id_list.size(); j++)
        {
            
            if (reportBoard[i][j] == 1 && reportCount[j] >= k)
                reportMailCount[i] += 1;
        }
    }

    cout << "\n메일 카운트" << endl;
    for (int i = 0; i < id_list.size(); i++)
        cout << reportMailCount[i] << " ";
    
    return 0;
}