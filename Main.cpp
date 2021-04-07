#include <iostream>
#include "Board.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;
Board board;
Board mini;
int main() {
    mini.post(1,1,Direction::Vertical,"A");
    mini.post(2,5,Direction::Vertical,"MINI");
    mini.post(3,8,Direction::Vertical,"BOARD");
    mini.post(10,6,Direction::Horizontal,"THET IDS ENDLESS");
    mini.post(9,1,Direction::Horizontal,"A SMALL ONE");
    mini.post(17,5,Direction::Horizontal,"for EX2A");
    mini.show();
    cout<<"\n"<<endl;
//    cout<<"after adding size  --->  "<<endl;
//    cout<<"\n"<<endl;
//    mini.post(31,0,Direction::Horizontal,"add size to this exempal");
//    mini.post(23,0,Direction::Horizontal,"$$$$ --->  *** ^&");
//    mini.post(34,0,Direction::Horizontal,"^^^^^^0_)(_0^^^^^^");
//    mini.post(27,2,Direction::Vertical,"            ");
//    mini.post(23,0,Direction::Vertical,"end of this");
//    mini.show();
//
//    cout<<"new board  --->  "<<endl;
//    cout<<"\n"<<endl;
//    board.post(1, 1, Direction::Vertical, "new board");
//    board.show();
//    cout<<"\n"<<endl;
//    board.post(5,1,Direction::Horizontal,"zxcvb");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(10,20,Direction::Horizontal,0)<<endl;//
//    cout<<board.read(5,1,Direction::Horizontal,1)<<endl;//z
//    cout<<board.read(5,1,Direction::Horizontal,2)<<endl;//zx
//    cout<<board.read(5,1,Direction::Horizontal,3)<<endl;//zxc
//    cout<<board.read(5,1,Direction::Horizontal,4)<<endl;//zxcv
//    cout<<board.read(5,1,Direction::Horizontal,5)<<endl;//zxcvb
//    cout<<"\n"<<endl;
//    board.post(10,11,Direction::Vertical,"is");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(10,15,Direction::Horizontal,1)<<endl;//_
//    cout<<board.read(10,15,Direction::Horizontal,2)<<endl;//__
//    cout<<board.read(10,15,Direction::Vertical,1)<<endl;//_
//    cout<<board.read(10,15,Direction::Vertical,3)<<endl;//___
//    cout<<"\n"<<endl;
//    board.post(8,3,Direction::Vertical,"endless");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(10,3,Direction::Horizontal,1)<<endl;//d
//    cout<<board.read(10,3,Direction::Horizontal,2)<<endl;//d_
//    cout<<board.read(10,3,Direction::Vertical,1)<<endl;//d
//    cout<<board.read(10,3,Direction::Vertical,2)<<endl;//dl
//    cout<<"\n"<<endl;
//    board.post(4,6,Direction::Vertical,"the");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(5,18,Direction::Horizontal,10)<<endl;//__________
//    cout<<board.read(4,6,Direction::Horizontal,2)<<endl;//t_
//    cout<<board.read(4,6,Direction::Vertical,1)<<endl;//t
//    cout<<board.read(4,6,Direction::Vertical,2)<<endl;//th
//    cout<<"\n"<<endl;
//    board.post(1,2,Direction::Vertical,"the");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(5,18,Direction::Horizontal,10)<<endl;//__________
//    cout<<board.read(10,16,Direction::Horizontal,2)<<endl;//__
//    cout<<board.read(4,20,Direction::Vertical,1)<<endl;//_
//    cout<<board.read(5,19,Direction::Vertical,2)<<endl;//__
//    cout<<"\n"<<endl;
//    board.post(2,3,Direction::Vertical,"board");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(2,2,Direction::Horizontal,10)<<endl;//hb________
//    cout<<board.read(10,2,Direction::Horizontal,2)<<endl;//_d
//    cout<<board.read(2,3,Direction::Vertical,1)<<endl;//b
//    cout<<board.read(2,3,Direction::Vertical,2)<<endl;//bo
//    cout<<"\n"<<endl;
//    board.post(1,11,Direction::Vertical,"Dors");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(1,11,Direction::Horizontal,4)<<endl;//D___
//    cout<<board.read(1,11,Direction::Horizontal,14)<<endl;//D_____________
//    cout<<board.read(1,11,Direction::Vertical,1)<<endl;//D
//    cout<<board.read(1,11,Direction::Vertical,4)<<endl;//Dors
//    cout<<"\n"<<endl;
//    board.post(1,3,Direction::Vertical,"board");//what i expect:
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(1,3,Direction::Horizontal,1)<<endl;//b
//    cout<<board.read(1,3,Direction::Horizontal,2)<<endl;//b|
//    cout<<board.read(3,1,Direction::Vertical,1)<<endl;//|
//    cout<<board.read(3,3,Direction::Vertical,2)<<endl;//ar
//    cout<<"\n"<<endl;
//
//    board.post(45,21,Direction::Vertical,"seeeee");
//    board.post(100,21,Direction::Vertical," ");
//    cout<<"\n"<<endl;
//    board.show();
//    cout<<"\n"<<endl;
//    cout<<board.read(1,3,Direction::Horizontal,1)<<endl;//b
//    cout<<board.read(1,3,Direction::Horizontal,2)<<endl;//b|
//    cout<<board.read(3,1,Direction::Vertical,1)<<endl;//|
//    cout<<board.read(3,3,Direction::Vertical,2)<<endl;//ar
//    cout<<"\n"<<endl;
//    board.post(100, 100, Direction::Horizontal, "||||");
//    cout << board.read(100, 100, Direction::Horizontal, 4) << endl;
//    board.post(50, 50, Direction::Horizontal, "|  |");
//    board.post(50, 50, Direction::Horizontal, "|  |");
//    board.post(51, 50, Direction::Horizontal, "____");
//    board.post(65, 89, Direction::Horizontal, "(O_0)");
//    board.post(73, 39, Direction::Horizontal, "snowman");
//    board.post(83, 42, Direction::Horizontal, "POST");
//    board.post(49, 90, Direction::Horizontal, "|TEST|");
//    board.post(53, 62, Direction::Horizontal, "| ENDNIT |");
//    cout<<"\n"<<endl;
//    board.show();


}
