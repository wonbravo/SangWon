#include "Player.h"
#include "Engine.h"

APlayer::APlayer()
{
	x = 1;
	y = 1;
	Shape = 'P';
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (GEngine->GetKeyCode())
	{
	case 'w' :
		y--;
		break;
	case 's':
		y++;
		break;
	case 'a':
		x--;
		break;
	case 'd':
		x++;
		break;
	}
}


