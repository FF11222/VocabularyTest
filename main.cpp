#include <bits/stdc++.h>
using namespace std;
vector<pair<string, string>> vocabularies = {
        make_pair("fabulous", "極好的"),make_pair("wary", "謹慎的"),make_pair("breakthrough", "突破"),
        make_pair("repetitive", "重複的"),make_pair("implement", "執行"),make_pair("ethical", "道德的"),
        make_pair("pedestrian", "行人"),make_pair("guideline", "指導方針"),make_pair("humanity", "人"),
        make_pair("automatic", "自動化"),make_pair("cyberthreat", "網路威脅"),make_pair("ethicist", "倫理學家"),
        make_pair("artificial intelligence", "人工智慧"),make_pair("contemplate", "沉思"),make_pair("adept", "擅長"),
        make_pair("liberate", "解放"),make_pair("formidable", "艱鉅的"),make_pair("hence", "因此"),
        make_pair("inevitably", "不可避免的"),make_pair("deceive", "欺騙"),make_pair("tedious", "單調乏味的"),
        make_pair("vast", "廣闊的"),make_pair("outlying", "邊遠的"), make_pair("originally", "原本"),
        make_pair("grilled", "燒烤的"), make_pair("wilderness", "荒野"), make_pair("prominent", "著名的"),
        make_pair("cruise", "航遊"), make_pair("entertaining", "有趣的"), make_pair("outback", "內地"),
        make_pair("vice versa", "反之亦然"), make_pair("inland", "內陸"), make_pair("well-appointed", "設備完好的"),
        make_pair("crocodile", "鱷魚"), make_pair("Aboriginal", "澳洲原住民的")
};

int main() {
    system("chcp 65001");
    cout << "Welcome to vocabulary test!\nThat's try how much you can complete!\n";
    srand(time(NULL));

    while (true) {
        int index = rand() % vocabularies.size();
        int select = rand() % 2;

        while (true) {
            select ? cout << vocabularies[index].first << ":\n" : cout << vocabularies[index].second << ":\n";

            string ans;
            cin >> ans;
            if (select) {
                if (ans.compare(vocabularies[index].second)) {
                    cout << "correct!\n";
                    break;
                } else {
                    cout << "too sad\n";
                    cout << "answer is " << vocabularies[index].second << '\n';
                    break;
                }
            } else {
                if (ans.compare(vocabularies[index].first)) {
                    cout << "correct!\n";
                    break;
                } else {
                    cout << "too sad\n";
                    cout << "answer is " << vocabularies[index].first << '\n';
                    break;
                }
            }
        }

        cout << "Do you want to continue?(y/n):\n";
        char yn;
        cin >> yn;

        if (yn == 'n') {
            break;
        }
    }
    return 0;
}
