#pragma once
#include<struct.h>
#include<random>
#include<time.h>

//変数
const int BlockSize_ = 8;
const int MapX = 1280 / BlockSize_;
const int MapY = 720 / BlockSize_;

//マップとの当たり判定のクラス
class MapChip_Class
{
public:

	MapChip_Class();
	~MapChip_Class();

	void Update(char* keys);

	

	//マップ描画
	
	void Draw();

private:
	//変数
	

	VectorInt2 mapNum = { 20,20 };

	VectorInt2 pos[MapY][MapX] = { 0 };
	float  dist[MapY][MapX] = { 0 };
	unsigned int color_blacks[MapY][MapX] = { 0 };

	int randMap[MapY][MapX] = {};

	int MapDeta_[MapY][MapX]
	{
	};

	float perlin_grid[MapY][MapX];
};





