#include "Block.h"
#include "DxLib.h"
#include "InoutControl.h"

/*****************************************************
*�}�N����`
*****************************************************/
#define FIELD_HEIGHT       (21)     //�t�B�[���Ƃ̃}�X�̍���
#define FIELD_WIDTH        (12)     //�t�B�[���h�̃}�X�̕�
#define BLOCK_TROUT_SIZE   (4)      //�u���b�N�̃}�X�T�C�Y
#define BLOCK_SIZE         (36)     //�P�u���b�N������̃T�C�Y
#define BLOCK_TYPE_MAX     (7)      //�����Ă���u���b�N�̎��
#define BLOCK_NEXT_POS_X   (700)    //���̃u���b�N�̍��W(X���W)
#define BLOCK_NEXT_POS_Y   (500)    //���̃u���b�N�̍��W(Y���W)
#define BLOCK_STOCK_POS_X  (500)    //�X�g�b�N���ꂽ�u���b�N�̍��W(Y���W)
#define BLOCK_STOCK_POS_Y  (350)    //�X�g�b�N���ꂽ�u���b�N�̍��W(X���W)
#define DROP_BLOCK_INIT_X  (4)      //�����Ă���u���b�N�̏���X���W
#define DROP_BLOCK_INIT_Y  (-1)     //�����Ă���u���b�N�̏���Y���W
#define DROP_SPEED         (60)     //��������
#define TURN_CROCKWICE     (0)      //���v���ɉ�]������
#define TURN_ANTICROCKWICE (1)      //�����v���ɉ�]������

/*****************************************************
*
*****************************************************/