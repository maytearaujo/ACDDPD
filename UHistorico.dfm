object Form8: TForm8
  Left = 286
  Top = 158
  Width = 476
  Height = 307
  AutoSize = True
  BorderIcons = []
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  HelpFile = 'Ajuda'
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 173
    Width = 234
    Height = 25
    Caption = 'Cadastrar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 0
    Top = 173
    Width = 234
    Height = 25
    Caption = 'Atualizar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton2Click
  end
  object SpeedButton3: TSpeedButton
    Left = 0
    Top = 198
    Width = 156
    Height = 25
    Caption = 'Consultar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton3Click
  end
  object SpeedButton5: TSpeedButton
    Left = 0
    Top = 173
    Width = 468
    Height = 25
    Caption = 'Excluir'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton5Click
  end
  object SpeedButton6: TSpeedButton
    Left = 234
    Top = 173
    Width = 234
    Height = 25
    Caption = 'Limpar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton6Click
  end
  object SpeedButton4: TSpeedButton
    Left = 312
    Top = 198
    Width = 156
    Height = 25
    Caption = 'Todos'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton4Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 468
    Height = 172
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label3: TLabel
      Left = 312
      Top = 12
      Width = 76
      Height = 13
      Caption = 'Código Sócio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 10
      Top = 100
      Width = 51
      Height = 13
      Caption = 'Histórico'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 10
      Top = 145
      Width = 69
      Height = 13
      Caption = 'Observação'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 203
      Top = 12
      Width = 32
      Height = 13
      Caption = 'Data '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 10
      Top = 44
      Width = 69
      Height = 13
      Caption = 'Nome Sócio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 319
      Top = 44
      Width = 67
      Height = 13
      Caption = 'Nascimento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 9
      Top = 12
      Width = 94
      Height = 13
      Caption = 'Código Histórico'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Memo1: TMemo
      Left = 85
      Top = 70
      Width = 371
      Height = 63
      MaxLength = 255
      TabOrder = 3
    end
    object Edit4: TEdit
      Left = 85
      Top = 142
      Width = 370
      Height = 21
      MaxLength = 255
      TabOrder = 4
    end
    object MaskEdit1: TMaskEdit
      Left = 238
      Top = 10
      Width = 69
      Height = 21
      EditMask = '!99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object MaskEdit2: TMaskEdit
      Left = 391
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      TabOrder = 2
      OnExit = MaskEdit2Exit
    end
    object Edit2: TEdit
      Left = 85
      Top = 40
      Width = 225
      Height = 21
      ReadOnly = True
      TabOrder = 5
    end
    object MaskEdit3: TMaskEdit
      Left = 388
      Top = 41
      Width = 69
      Height = 21
      EditMask = '!99/99/9999;1;_'
      MaxLength = 10
      ReadOnly = True
      TabOrder = 6
      Text = '  /  /    '
    end
    object MaskEdit4: TMaskEdit
      Left = 117
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      ReadOnly = True
      TabOrder = 0
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 0
    Top = 223
    Width = 468
    Height = 30
    Caption = 'Organizar'
    Columns = 3
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ItemIndex = 0
    Items.Strings = (
      'Código Sócio'
      'Código Histórico'
      'Data Histórico')
    ParentFont = False
    TabOrder = 2
    OnClick = RadioGroup1Click
  end
  object DBNavigator1: TDBNavigator
    Left = 156
    Top = 198
    Width = 156
    Height = 25
    DataSource = Form1.DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Flat = True
    Hints.Strings = (
      'Primeiro'
      'Anterior'
      'Próximo'
      'Último'
      'Insert record'
      'Delete record'
      'Edit record'
      'Post edit'
      'Cancel edit'
      'Refresh data')
    TabOrder = 1
    OnClick = DBNavigator1Click
  end
  object MainMenu1: TMainMenu
    Left = 30
    Top = 116
    object Associacao: TMenuItem
      Caption = 'Associação'
      object Fechar1: TMenuItem
        Caption = 'Fechar'
        OnClick = Fechar1Click
      end
      object Sair: TMenuItem
        Caption = 'Sair'
        ShortCut = 32883
        OnClick = SairClick
      end
    end
    object Historico: TMenuItem
      Caption = 'Histórico'
      object CadastrarHistorico: TMenuItem
        Caption = 'Cadastrar'
        OnClick = CadastrarHistoricoClick
      end
      object ConsultarHistorico: TMenuItem
        Caption = 'Consultar'
        OnClick = ConsultarHistoricoClick
      end
      object AtualizarHistorico: TMenuItem
        Caption = 'Atualizar'
        OnClick = AtualizarHistoricoClick
      end
      object ExcluirHistorico: TMenuItem
        Caption = 'Excluir'
        OnClick = ExcluirHistoricoClick
      end
    end
  end
end
