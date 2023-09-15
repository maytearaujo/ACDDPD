object Form10: TForm10
  Left = 238
  Top = 162
  Width = 536
  Height = 286
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
    Top = 152
    Width = 264
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
    Top = 177
    Width = 176
    Height = 25
    Caption = 'Consultar'
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
    Top = 152
    Width = 264
    Height = 25
    Caption = 'Atualizar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton3Click
  end
  object SpeedButton4: TSpeedButton
    Left = 0
    Top = 152
    Width = 528
    Height = 25
    Caption = 'Excluir'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton4Click
  end
  object SpeedButton5: TSpeedButton
    Left = 264
    Top = 152
    Width = 264
    Height = 25
    Caption = 'Limpar'
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
    Left = 352
    Top = 177
    Width = 176
    Height = 25
    Caption = 'Todos'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton6Click
  end
  object DBNavigator1: TDBNavigator
    Left = 176
    Top = 177
    Width = 176
    Height = 25
    DataSource = Form1.DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Flat = True
    TabOrder = 2
    OnClick = DBNavigator1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 528
    Height = 151
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 10
      Top = 32
      Width = 88
      Height = 13
      Caption = 'Código Doacão'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 370
      Top = 32
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
    object Label4: TLabel
      Left = 10
      Top = 64
      Width = 33
      Height = 13
      Caption = 'Nome'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 374
      Top = 64
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
    object Label8: TLabel
      Left = 179
      Top = 30
      Width = 76
      Height = 13
      Caption = 'Data Doação'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 10
      Top = 94
      Width = 50
      Height = 13
      Caption = 'Valor R$'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 10
      Top = 126
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
    object Label3: TLabel
      Left = 264
      Top = 7
      Width = 51
      Height = 13
      Caption = 'Doação'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 144
      Top = 7
      Width = 92
      Height = 13
      Caption = 'Tipo de Doação'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object MaskEdit1: TMaskEdit
      Left = 105
      Top = 26
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      ReadOnly = True
      TabOrder = 0
    end
    object Edit1: TEdit
      Left = 105
      Top = 58
      Width = 225
      Height = 21
      MaxLength = 50
      ReadOnly = True
      TabOrder = 6
    end
    object MaskEdit3: TMaskEdit
      Left = 448
      Top = 58
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      ReadOnly = True
      TabOrder = 7
      Text = '  /  /    '
    end
    object MaskEdit2: TMaskEdit
      Left = 449
      Top = 26
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      TabOrder = 2
      OnExit = MaskEdit2Exit
    end
    object MaskEdit4: TMaskEdit
      Left = 264
      Top = 27
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object MaskEdit5: TMaskEdit
      Left = 105
      Top = 91
      Width = 65
      Height = 21
      Hint = 'Digite Apenas Números'
      EditMask = '99999999;0; '
      MaxLength = 8
      ParentShowHint = False
      ShowHint = True
      TabOrder = 3
    end
    object RadioGroup1: TRadioGroup
      Left = 200
      Top = 83
      Width = 315
      Height = 32
      Caption = '&Tipo de Doação'
      Columns = 3
      Items.Strings = (
        'Telemarketing'
        'Prefeitura'
        'Pessoalmente')
      TabOrder = 4
    end
    object Edit2: TEdit
      Left = 105
      Top = 123
      Width = 410
      Height = 21
      MaxLength = 255
      TabOrder = 5
    end
  end
  object RadioGroup2: TRadioGroup
    Left = 0
    Top = 202
    Width = 528
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
      'Código Doação'
      'Data Doação')
    ParentFont = False
    TabOrder = 1
    OnClick = RadioGroup2Click
  end
  object MainMenu1: TMainMenu
    Left = 54
    Top = 58
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
    object DoacaoSocios: TMenuItem
      Caption = 'Doação'
      object CadastrarDoacaoSocios: TMenuItem
        Caption = 'Cadastrar'
        OnClick = CadastrarDoacaoSociosClick
      end
      object ConsultarDoacaoSocios: TMenuItem
        Caption = 'Consultar'
        OnClick = ConsultarDoacaoSociosClick
      end
      object AtualizarDoacaoSocios: TMenuItem
        Caption = 'Atualizar'
        OnClick = AtualizarDoacaoSociosClick
      end
      object ExcluirDoacaoSocios: TMenuItem
        Caption = 'Excluir'
        OnClick = ExcluirDoacaoSociosClick
      end
    end
  end
end
