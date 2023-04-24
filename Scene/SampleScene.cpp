//--------------------------------------------------------------------------------------
// File: SampleScene.cpp
//
// �V�[���̐��^�Ɏg�p���Ă�������
//
// Date: 2023.3.25
// Author: Hideyasu Imase
//--------------------------------------------------------------------------------------
#include "../pch.h"
#include "SampleScene.h"

using namespace DirectX;

// ������
void SampleScene::Initialize()
{
	CreateDeviceDependentResources();
	CreateWindowSizeDependentResources();

}

// �X�V
void SampleScene::Update(float elapsedTime)
{
	UNREFERENCED_PARAMETER(elapsedTime);

}

// �`��
void SampleScene::Render()
{
	auto debugFont = GetUserResources()->GetDebugFont();
	debugFont->AddString(L"SampleScene", SimpleMath::Vector2(0.0f, debugFont->GetFontHeight()));
}

// �I������
void SampleScene::Finalize()
{
}

// �f�o�C�X�Ɉˑ����郊�\�[�X���쐬����֐�
void SampleScene::CreateDeviceDependentResources()
{
}

// �E�C���h�E�T�C�Y�Ɉˑ����郊�\�[�X���쐬����֐�
void SampleScene::CreateWindowSizeDependentResources()
{
}

// �f�o�C�X���X�g�������ɌĂяo�����֐�
void SampleScene::OnDeviceLost()
{
	Finalize();
}
