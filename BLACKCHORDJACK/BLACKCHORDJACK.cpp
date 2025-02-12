// simple black - chord - jack.cpp : Этот файл содержит функцию "main".Здесь начинается и заканчивается выполнение программы.
// 

#include <iostream> 
#include <vector> 
#include <time.h> 
#include <stdlib.h> 
#include <Windows.h> 
#include <string>
using namespace std;
using namespace std;

HANDLE hColor;

vector<int> hearts_vector_num = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };


vector<int> diamonds_vector_num = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };


vector<int> clovers_vector_num = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };


vector<int> pikes_vector_num = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };


int ace;
int count_game_player = 0;
int c;
int count_cards_output;
int de_num = 0;
int de_king = 0;
int vector_rand;
int num = 9;
int kings = 3;
int it_num;
int it_kings;
int rand_num = num - de_num;
int rand_kings = kings - de_king;
int k = 0;
int key = 0;
int k3h = 0, k3d = 0, k3c = 0, k3p = 0;
int k1 = 0;
int k9h = 0, k9d = 0, k9c = 0, k9p = 0;
int new_rand;
vector<int> keyv;

vector<int> caseing;

//bot 
int enemy_kard_detect = 0;
int k_bot = 0;
int enemy_key;
vector<int> enemy_keyv;



// Pring kards
string kard;
int id_print_phantasm;
void AssebleCardTop()
{
    cout << ".------.";
}
void AssebleCardButton()
{
    cout << "`------'";
}
void AssebleCardNumberTop()
{
    cout << "|"<<kard<<".--. |";
}

void AssebleCardNumberButton()
{
    cout << "| '--'"<<kard<<"|";
}
void AssebleCardPrintTop()
{
    
        if (id_print_phantasm == 1)
        {
            cout << "| (\\/) |";
        }
        else if (id_print_phantasm == 2)
        {
            cout << "| :/\\: |";
        }
        else if (id_print_phantasm == 3)
        {
            cout << "| :(): |";
        }
        else if (id_print_phantasm == 4)
        {
            cout << "| :/\\: |";
        }
   

}
void AssebleCardPrintButtom()
{

        if (id_print_phantasm == 1)
        {
            cout << "| :\\/: |";
        }
        else if (id_print_phantasm == 2)
        {
            cout << "| :\\/: |";
        }
        else if (id_print_phantasm == 3)
        {
            cout << "| ()() |";
        }
        else if (id_print_phantasm == 4)
        {
            cout << "| (__) |";
        }
   

}
void OutputKard()
{
    if (enemy_kard_detect == 0)
    {
        cout << "------Player Cards------" << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            AssebleCardTop();
            cout << "\t";
        }
        cout << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            if (keyv[i] % 101 == 0)
            {
                kard = "1";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else  if (keyv[i] % 102 == 0)
            {
                kard = "2";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 103 == 0)
            {
                kard = "3";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 104 == 0)
            {
                kard = "4";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 105 == 0)
            {
                kard = "5";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 106 == 0)
            {
                kard = "6";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 107 == 0)
            {
                kard = "7";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 108 == 0)
            {
                kard = "8";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 109 == 0)
            {
                kard = "9";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 110 == 0)
            {
                kard = "X";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 111 == 0)
            {
                kard = "J";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 112 == 0)
            {
                kard = "Q";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 113 == 0)
            {
                kard = "K";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 114 == 0)
            {
                kard = "T";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            if (keyv[i] > 99 and keyv[i] < 190)
            {
                id_print_phantasm = 1;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else if (keyv[i] > 199 and keyv[i] < 290)
            {
                id_print_phantasm = 2;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else  if (keyv[i] > 299 and keyv[i] < 390)
            {
                id_print_phantasm = 3;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else if (keyv[i] > 399 and keyv[i] < 590)
            {
                id_print_phantasm = 4;
                AssebleCardPrintTop();
                cout << "\t";
            }
        }
        cout << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            if (keyv[i] > 99 and keyv[i] < 190)
            {
                id_print_phantasm = 1;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else if (keyv[i] > 199 and keyv[i] < 290)
            {
                id_print_phantasm = 2;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else  if (keyv[i] > 299 and keyv[i] < 390)
            {
                id_print_phantasm = 3;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else if (keyv[i] > 399 and keyv[i] < 580)
            {
                id_print_phantasm = 4;
                AssebleCardPrintButtom();
                cout << "\t";
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            if (keyv[i] % 101 == 0)
            {
                kard = "1";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else  if (keyv[i] % 102 == 0)
            {
                kard = "2";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 103 == 0)
            {
                kard = "3";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 104 == 0)
            {
                kard = "4";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 105 == 0)
            {
                kard = "5";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 106 == 0)
            {
                kard = "6";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 107 == 0)
            {
                kard = "7";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 108 == 0)
            {
                kard = "8";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 109 == 0)
            {
                kard = "9";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 110 == 0)
            {
                kard = "X";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 111 == 0)
            {
                kard = "J";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 112 == 0)
            {
                kard = "Q";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 113 == 0)
            {
                kard = "K";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (keyv[i] % 114 == 0)
            {
                kard = "T";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < keyv.size(); ++i)
        {
            AssebleCardButton();
            cout << "\t";
        }
    }
    else
    {
        cout << "------Bot Cards------" << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            AssebleCardTop();
            cout << "\t";
        }
        cout << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            if (enemy_keyv[i] % 101 == 0)
            {
                kard = "1";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else  if (enemy_keyv[i] % 102 == 0)
            {
                kard = "2";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 103 == 0)
            {
                kard = "3";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 104 == 0)
            {
                kard = "4";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 105 == 0)
            {
                kard = "5";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 106 == 0)
            {
                kard = "6";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 107 == 0)
            {
                kard = "7";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 108 == 0)
            {
                kard = "8";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 109 == 0)
            {
                kard = "9";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 110 == 0)
            {
                kard = "X";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 111 == 0)
            {
                kard = "J";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 112 == 0)
            {
                kard = "Q";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 113 == 0)
            {
                kard = "K";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 114 == 0)
            {
                kard = "T";
                AssebleCardNumberTop();
                cout << "\t";
                kard.clear();
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            if (enemy_keyv[i] > 99 and enemy_keyv[i] < 190)
            {
                id_print_phantasm = 1;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else if (enemy_keyv[i] > 199 and enemy_keyv[i] < 290)
            {
                id_print_phantasm = 2;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else  if (enemy_keyv[i] > 299 and enemy_keyv[i] < 390)
            {
                id_print_phantasm = 3;
                AssebleCardPrintTop();
                cout << "\t";
            }
            else if (enemy_keyv[i] > 399 and enemy_keyv[i] < 590)
            {
                id_print_phantasm = 4;
                AssebleCardPrintTop();
                cout << "\t";
            }
        }
        cout << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            if (enemy_keyv[i] > 99 and enemy_keyv[i] < 190)
            {
                id_print_phantasm = 1;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else if (enemy_keyv[i] > 199 and enemy_keyv[i] < 290)
            {
                id_print_phantasm = 2;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else  if (enemy_keyv[i] > 299 and enemy_keyv[i] < 390)
            {
                id_print_phantasm = 3;
                AssebleCardPrintButtom();
                cout << "\t";
            }
            else if (enemy_keyv[i] > 399 and enemy_keyv[i] < 580)
            {
                id_print_phantasm = 4;
                AssebleCardPrintButtom();
                cout << "\t";
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            if (enemy_keyv[i] % 101 == 0)
            {
                kard = "1";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else  if (enemy_keyv[i] % 102 == 0)
            {
                kard = "2";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 103 == 0)
            {
                kard = "3";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 104 == 0)
            {
                kard = "4";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 105 == 0)
            {
                kard = "5";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 106 == 0)
            {
                kard = "6";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 107 == 0)
            {
                kard = "7";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 108 == 0)
            {
                kard = "8";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 109 == 0)
            {
                kard = "9";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 110 == 0)
            {
                kard = "X";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 111 == 0)
            {
                kard = "J";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 112 == 0)
            {
                kard = "Q";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 113 == 0)
            {
                kard = "K";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }
            else if (enemy_keyv[i] % 114 == 0)
            {
                kard = "T";
                AssebleCardNumberButton();
                cout << "\t";
                kard.clear();
            }


        }
        cout << "\n";
        for (unsigned i = 0; i < enemy_keyv.size(); ++i)
        {
            AssebleCardButton();
            cout << "\t";
        }
    }

}
// function checker card vector, his clear or not

void Checker_card()
{
    new_rand = c - caseing.size();
    
    for (unsigned i = 0; i < caseing.size();++i)

    {
        if (caseing[i] == c)
        {
         
            c = rand() % new_rand;
        }
    }
}


// Random kards drop
void Random_card_selector()
{
    Checker_card();


    switch (c)
    {
    case 1:
    {
        if (enemy_kard_detect == 0)
        {

            it_num = rand() % hearts_vector_num.size();
            vector_rand = hearts_vector_num[it_num];
            key = 100 + hearts_vector_num[it_num];
            hearts_vector_num.erase(hearts_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                count_game_player += vector_rand;
            }
            else if (vector_rand == 11)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 12)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 13)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 14)
            {

                cout << "Ace, select nomenal" << "\n";
                cin >> ace;
                cout << "\n";
                if (ace == 1)
                {
                    count_game_player += 1;
                }
                else if (ace == 11)
                {
                    count_game_player += 11;
                }
            }

            keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9h++;
            if (k9h == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
        else
        {
            it_num = rand() % hearts_vector_num.size();
            vector_rand = hearts_vector_num[it_num];
            key = 100 + hearts_vector_num[it_num];
            hearts_vector_num.erase(hearts_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                k_bot += vector_rand;
            }
            else if (vector_rand == 11)
            {
                k_bot += 10;

            }
            else if (vector_rand == 12)
            {
                k_bot += 10;

            }
            else if (vector_rand == 13)
            {
                k_bot += 10;

            }
            else if (vector_rand == 14)
            {

                
                
                if (k_bot>7)
                {
                    k_bot += 1;
                }
                else if (k_bot<7)
                {
                    k_bot += 11;
                }
            }

            enemy_keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9h++;
            if (k9h == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
    } 
    case 2:
    {
        if (enemy_kard_detect == 0)
        {
            it_num = rand() % diamonds_vector_num.size();
            vector_rand = diamonds_vector_num[it_num];
            key = 200 + (diamonds_vector_num[it_num] * 2);
            diamonds_vector_num.erase(diamonds_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                count_game_player += vector_rand;
            }
            else if (vector_rand == 11)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 12)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 13)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 14)
            {

                cout << "Ace, select nomenal" << "\n";
                cin >> ace;
                cout << "\n";
                if (ace == 1)
                {
                    count_game_player += 1;
                }
                else if (ace == 11)
                {
                    count_game_player += 11;
                }
            }

            keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9d++;
            if (k9d == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
        else
        {
     
            it_num = rand() % diamonds_vector_num.size();
            vector_rand = diamonds_vector_num[it_num];
            key = 200 + (diamonds_vector_num[it_num] * 2);
            diamonds_vector_num.erase(diamonds_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                k_bot += vector_rand;
            }
            else if (vector_rand == 11)
            {
                k_bot += 10;

            }
            else if (vector_rand == 12)
            {
                k_bot += 10;

            }
            else if (vector_rand == 13)
            {
                k_bot += 10;

            }
            else if (vector_rand == 14)
            {

                if (k_bot > 7)
                {
                    k_bot += 1;
                }
                else if (k_bot < 7)
                {
                    k_bot += 11;
                }
            }

            enemy_keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9d++;
            if (k9d == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
    }
    case 3:
    {
        if (enemy_kard_detect == 0)
        {
            it_num = rand() % clovers_vector_num.size();
            vector_rand = clovers_vector_num[it_num];
            key = 300 + (clovers_vector_num[it_num] * 3);
            clovers_vector_num.erase(clovers_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                count_game_player += vector_rand;
            }
            else if (vector_rand == 11)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 12)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 13)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 14)
            {

                cout << "Ace, select nomenal" << "\n";
                cin >> ace;
                cout << "\n";
                if (ace == 1)
                {
                    count_game_player += 1;
                }
                else if (ace == 11)
                {
                    count_game_player += 11;
                }
            }

            keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9c++;
            if (k9c == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
        else
        {
            it_num = rand() % clovers_vector_num.size();
            vector_rand = clovers_vector_num[it_num];
            key = 300 + (clovers_vector_num[it_num] * 3);
            clovers_vector_num.erase(clovers_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                k_bot += vector_rand;
            }
            else if (vector_rand == 11)
            {
                k_bot += 10;

            }
            else if (vector_rand == 12)
            {
                k_bot += 10;

            }
            else if (vector_rand == 13)
            {
                k_bot += 10;

            }
            else if (vector_rand == 14)
            {

                if (k_bot > 7)
                {
                    k_bot += 1;
                }
                else if (k_bot < 7)
                {
                    k_bot += 11;
                }
            }

            enemy_keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9d++;
            if (k9d == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
    }
    case 4:
    {
        if (enemy_kard_detect == 0)
        {
            it_num = rand() % pikes_vector_num.size();
            vector_rand = pikes_vector_num[it_num];
            key = 400 + (pikes_vector_num[it_num] * 4);
            pikes_vector_num.erase(pikes_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                count_game_player += vector_rand;
            }
            else if (vector_rand == 11)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 12)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 13)
            {
                count_game_player += 10;

            }
            else if (vector_rand == 14)
            {

                cout << "Ace, select nomenal" << "\n";
                cin >> ace;
                cout << "\n";
                if (ace == 1)
                {
                    count_game_player += 1;
                }
                else if (ace == 11)
                {
                    count_game_player += 11;
                }
            }

            keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9p++;
            if (k9p == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
        else
        {
            it_num = rand() % pikes_vector_num.size();
            vector_rand = pikes_vector_num[it_num];
            key = 400 + (pikes_vector_num[it_num] * 4);
            pikes_vector_num.erase(pikes_vector_num.begin() + it_num);
            count_cards_output++;
            if (vector_rand < 11)
            {
                k_bot += vector_rand;
            }
            else if (vector_rand == 11)
            {
                k_bot += 10;

            }
            else if (vector_rand == 12)
            {
                k_bot += 10;

            }
            else if (vector_rand == 13)
            {
                k_bot += 10;

            }
            else if (vector_rand == 14)
            {

                if (k_bot > 7)
                {
                    k_bot += 1;
                }
                else if (k_bot < 7)
                {
                    k_bot += 11;
                }
            }

            enemy_keyv.push_back(key);
            // cout << vector_rand << " " << "hearts";

            k9d++;
            if (k9d == 13)
            {
                caseing.push_back(c);
            }

            break;
        }
    }

    /*case 5:
    {
        it_kings = rand() % hearts_vector_kings.size();
        vector_rand = hearts_vector_kings[it_kings];
        key = 111 + hearts_vector_kings[it_kings];
        hearts_vector_kings.erase(hearts_vector_kings.begin() + it_kings);
        count_cards_output++;
        if (vector_rand == 11)
        {
            count_game_player += 10;
       
        }
        else if (vector_rand == 12)
        {
            count_game_player += 10;
     
        }
        else if (vector_rand == 13)
        {
            count_game_player += 10;
   
        }
        keyv.push_back(key);
       // cout << vector_rand << " " << "hearts kings";
        k3h++;
        if (k3h == 3)
        {
            caseing.push_back(c);
        }
    
        break;
    }  case 9:
    {
        key = 131 + hearts_vector_tuz[0];
        hearts_vector_tuz.erase(hearts_vector_tuz.begin() + 0);
        count_cards_output++;
        keyv.push_back(key);
        cout << "Ace, select nomenal" << "\n";
        cin >> ace;
        cout << "\n";
        if (ace == 1)
        {
            count_game_player += 1;
        }
        else if (ace == 11)
        {
            count_game_player += 11;
        }
        k1++;
        if (k1 == 1)
        {
            caseing.push_back(c);
            k1 = 0;
        }
        break;
    }  case 2:
    {
        it_num = rand() % diamonds_vector_num.size();
        vector_rand = diamonds_vector_num[it_num];
        key = 200 + (diamonds_vector_num[it_num] * 2);
        diamonds_vector_num.erase(diamonds_vector_num.begin() + it_num);
        count_cards_output++;
        count_game_player += vector_rand;
        keyv.push_back(key);
        //cout << vector_rand << " " << "diamonds";
        k9d++;
        if (k9d == 9)
        {
            caseing.push_back(c);
        }
        
        break;
    }  case 6:
    {
        it_kings = rand() % diamonds_vector_kings.size();
        vector_rand = diamonds_vector_kings[it_kings];
        key = 222 + (diamonds_vector_kings[it_kings] * 2 );
        diamonds_vector_kings.erase(diamonds_vector_kings.begin() + it_kings);
        count_cards_output++;
        if (vector_rand == 11)
        {
            count_game_player += 10;
       
        }
        else if (vector_rand == 12)
        {
            count_game_player += 10;
        
        }
        else if (vector_rand == 13)
        {
            count_game_player += 10;
       
        }
        keyv.push_back(key);
        //cout << vector_rand << " " << "diamonds kings";
        k3d++;
        if (k3d == 3)
        {
            caseing.push_back(c);
        }
        
        break;
    }  case 10:
    {
        key = 262 + (diamonds_vector_tuz[0]*2);
        diamonds_vector_tuz.erase(diamonds_vector_tuz.begin() + 0);
        count_cards_output++;
        keyv.push_back(key);
        cout << "Ace, select nomenal" << "\n";
        cin >> ace;
        cout << "\n";
        if (ace == 1)
        {
            count_game_player += 1;
        }
        else if (ace == 11)
        {
            count_game_player += 11;
        }
        k1++;
        if (k1 == 1)
        {
            caseing.push_back(c);
            k1 = 0;
        }

        break;
    }  case 3:
    {
        it_num = rand() % clovers_vector_num.size();
        vector_rand = clovers_vector_num[it_num];
        key = 300 + (clovers_vector_num[it_num] * 3);
        clovers_vector_num.erase(clovers_vector_num.begin() + it_num);
        count_cards_output++;
        count_game_player += vector_rand;

        keyv.push_back(key);
        //cout << vector_rand << " " << "clovers";
        k9c++;
        if (k9c == 9)
        {
            caseing.push_back(c);
        }
       
        break;
    }  case 7:
    {
        it_kings = rand() % clovers_vector_kings.size();
        vector_rand = clovers_vector_kings[it_kings];
        key = 333 + (clovers_vector_kings[it_kings] * 3);
        clovers_vector_kings.erase(clovers_vector_kings.begin() + it_kings);
        count_cards_output++;
        if (vector_rand == 11)
        {
            count_game_player += 10;
          
        }
        else if (vector_rand == 12)
        {
            count_game_player += 10;
          
        }
        else if (vector_rand == 13)
        {
            count_game_player += 10;
           
        }
        keyv.push_back(key);
        //cout << vector_rand << " " << "clovers kings";
        k3c++;
        if (k3c == 3)
        {
            caseing.push_back(c);
        }
        
        break;
    }  case 11:
    {
        key = 393 + clovers_vector_tuz[0]*3;
        clovers_vector_tuz.erase(clovers_vector_tuz.begin() + 0);
        count_cards_output++;
        cout << "Ace, select nomenal" << "\n";
        cin >> ace;
        keyv.push_back(key);

        cout << "\n";
        if (ace == 1)
        {
            count_game_player += 1;
        }
        else if (ace == 11)
        {
            count_game_player += 11;
        }
        k1++;
        if (k1 == 1)
        {
            caseing.push_back(c);
            k1 = 0;
        }
        break;
    }  case 4:
    {
        it_num = rand() % pikes_vector_num.size();
        vector_rand = pikes_vector_num[it_num];
        key = 400 + (pikes_vector_num[it_num] * 4);
        pikes_vector_num.erase(pikes_vector_num.begin() + it_num);
        count_cards_output++;
        count_game_player += vector_rand;

        keyv.push_back(key);
        //cout << vector_rand << " " << "pikes";
        k9p++;
        if (k9p == 13)
        {
            caseing.push_back(c);
        }
        
        break;
    }  case 8:
    {
        it_kings = rand() % pikes_vector_kings.size();
        vector_rand = pikes_vector_kings[it_kings];
        key = 444 + (pikes_vector_kings[it_kings] * 4);
        pikes_vector_kings.erase(pikes_vector_kings.begin() + it_kings);
        count_cards_output++;
        if (vector_rand == 11)
        {
            count_game_player += 10;
 
        }
        else if (vector_rand == 12)
        {
            count_game_player += 10;
     
        }
        else if (vector_rand == 13)
        {
            count_game_player += 10;
     
        }
        keyv.push_back(key);
        //cout << vector_rand << " " << "pikes kings";
        k3p++;
        if (k3p == 3)
        {
            caseing.push_back(c);
        }
      
        break;
    }  case 12:
    {
        key = 524 + pikes_vector_tuz[0]*4;
        pikes_vector_tuz.erase(pikes_vector_tuz.begin() + 0);
        count_cards_output++;
        keyv.push_back(key);
        cout << "Ace, select nomenal" << "\n";
        cin >> ace;
        cout << "\n";
        if (ace == 1)
        {
            count_game_player += 1;
        }
        else if (ace == 11)
        {
            count_game_player += 11;
        }
        k1++;
        if (k1 == 1)
        {
            caseing.push_back(c);
            k1 = 0;
        }
        break;
    }*/
    default:
        break;
    }
}
int drop_card;
void BotAiCardDrop()
{
    if (k_bot == 15)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 10;
        if (chance_of_drop == 10)
        {
            drop_card++;
        }

    }
    if (k_bot == 16)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 8;
        if (chance_of_drop == 8)
        {
            drop_card++;
        }

    }
    if (k_bot == 17)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 7;
        if (chance_of_drop == 7)
        {
            drop_card++;
        }

    }
    if (k_bot == 18)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 6;
        if (chance_of_drop == 6)
        {
            drop_card++;
        }

    }
    if (k_bot == 19)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 5;
        if (chance_of_drop == 5)
        {
            drop_card++;
        }

    }
    if (k_bot == 20)
    {
        int chance_of_drop;
        chance_of_drop = rand() % 5;
        if (chance_of_drop != 5)
        {
            drop_card++;
        }

    }
}
void BotAi()
{
    enemy_kard_detect++;
    Random_card_selector();
    OutputKard();
    enemy_kard_detect = 0;
    cout << endl;




}

int main()
{
    string select_i;
    int select_j;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand((unsigned int)time(0));
    do {
        Sleep(100);
        system("cls");
        hColor = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hColor, 5);
        cout << R"(                                                                                                                                                                      
                                                                                                                                                                                 
                                                                                                                              ,---._                                  
    ,---,.   ,--,                              ,-.           ,----..    ,---,                                               .-- -.' \                            ,-.  
  ,'  .'  \,--.'|                          ,--/ /|          /   /   \ ,--.' |                           ,---,               |    |   :                       ,--/ /|  
,---.' .' ||  | :                        ,--. :/ |         |   :     :|  |  :       ,---.    __  ,-.  ,---.'|               :    ;   |                     ,--. :/ |  
|   |  |: |:  : '                        :  : ' /          .   |  ;. /:  :  :      '   ,'\ ,' ,'/ /|  |   | :               :        |                     :  : ' /   
:   :  :  /|  ' |     ,--.--.     ,---.  |  '  /           .   ; /--` :  |  |,--. /   /   |'  | |' |  |   | |               |    :   :  ,--.--.     ,---.  |  '  /    
:   |    ; '  | |    /       \   /     \ '  |  :           ;   | ;    |  :  '   |.   ; ,. :|  |   ,',--.__| |               :          /       \   /     \ '  |  :    
|   :     \|  | :   .--.  .-. | /    / ' |  |   \          |   : |    |  |   /' :'   | |: :'  :  / /   ,'   |               |    ;   |.--.  .-. | /    / ' |  |   \   
|   |   . |'  : |__  \__\/: . ..    ' /  '  : |. \         .   | '___ '  :  | | |'   | .; :|  | ' .   '  /  |           ___ l          \__\/: . ..    ' /  '  : |. \  
'   :  '; ||  | '.'| ," .--.; |'   ; :__ |  | ' \ \        '   ; : .'||  |  ' | :|   :    |;  : | '   ; |:  |         /    /\    J   : ," .--.; |'   ; :__ |  | ' \ \ 
|   |  | ; ;  :    ;/  /  ,.  |'   | '.'|'  : |--'         '   | '/  :|  :  :_:,' \   \  / |  , ; |   | '/  '        /  ../  `..-    ,/  /  ,.  |'   | '.'|'  : |--'  
|   :   /  |  ,   /;  :   .'   \   :    :;  |,'            |   :    / |  | ,'      `----'   ---'  |   :    :|        \    \         ;;  :   .'   \   :    :;  |,'     
|   | ,'    ---`-' |  ,     .-./\   \  / '--'               \   \ .'  `--''                        \   \  /           \    \      ,' |  ,     .-./\   \  / '--'       
`----'              `--`---'     `----'                      `---`                                  `----'             "---....--'    `--`---'     `----'             
                                                                                                                                                                              
           )" << "\n";
        SetConsoleTextAttribute(hColor, 7);
        int start_game;
        cin >> start_game;
        if (start_game == 1)
        {
            break;
        }
        else 
        { }
    } while (!true);


    do {
       
        // random section 
        c = rand() % 4;
        // Menu //
 
        cout << "\n";
        cout << "1. Продолжить игру";
        cout << "\n";
        cout << "2. Закончить игру";
        cout << "\n";
        cout << "Score:" << " " << count_game_player;
        cout << "\n";
        cout << "Score_bot:" << "" << k_bot;
        cout << "\n";
        getline(cin, select_i);
        cout << "\n";
        if (select_i[0] == '1')
        {
            BotAiCardDrop();
            BotAi();
            Random_card_selector();
            OutputKard();
            if (count_game_player > 21)
            {
                cout << "lose" << "\n";
                cout << "Score:" << " " << count_game_player;
                cout << "\n";
                cout << "Score_bot:" << "" << k_bot;
                break;
            }
            else if (count_game_player == 21)
            {
                cout << "win" << "\n";
                cout << "Score:" << " " << count_game_player;
                cout << "\n";
                cout << "Score_bot:" << "" << k_bot;
                break;
            }
            else if (k_bot == 21)
            {
                cout << "lose" << "\n";
                cout << "Score:" << " " << count_game_player;
                cout << "\n";
                cout << "Score_bot:" << "" << k_bot;
                break;
            }
            else if (k_bot > 21)
            {
                cout << "win" << "\n";
                cout << "Score:" << " " << count_game_player;
                cout << "\n";
                cout << "Score_bot:" << "" << k_bot;
                break;
            }
            else if (drop_card == 1)
            {
                cout << "win, bot droped cards" << "\n";
                cout << "Score:" << " " << count_game_player;
                cout << "\n";
                cout << "Score_bot:" << "" << k_bot;
            }
        }
        else if (select_i[0] == '2')
        {
            break;
        }
       
     /*   cout << ".------.\n"
            "|1.--. |\n"
            "| :/\\: |\n"
            "| (__) |\n"
            "| '--'1|\n"
            "`------'";
        cout << "\n";
        cout << ".------.\n"
            "|2.--. |\n"
            "| (\\/) |\n"
            "| :\\/: |\n"
            "| '--'2|\n"
            "`------'";
        cout << "\n";
        cout << ".------.\n"
            "|3.--. |\n"
            "| :(): |\n"
            "| ()() |\n"
            "| '--'3|\n"
            "`------'";
        cout << "\n";
        cout << ".------.\n"
            "|4.--. |\n"
            "| :/\\: |\n"
            "| :\\/: |\n"
            "| '--'4|\n"
            "`------'"; */
        

       
    } while (true);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки" 
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку" 

// Советы по началу работы  
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими. 
//   2. В окне Team Explorer можно подключиться к системе управления версиями. 
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения. 
//   4. В окне "Список ошибок" можно просматривать ошибки. 
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода. 
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.```
