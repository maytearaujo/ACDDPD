object Form12: TForm12
  Left = 234
  Top = 73
  Width = 527
  Height = 325
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
    Top = 190
    Width = 258
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
  object SpeedButton4: TSpeedButton
    Left = 0
    Top = 190
    Width = 516
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
    Left = 258
    Top = 190
    Width = 258
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
  object SpeedButton3: TSpeedButton
    Left = 0
    Top = 190
    Width = 258
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
  object SpeedButton6: TSpeedButton
    Left = 344
    Top = 215
    Width = 172
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
  object SpeedButton2: TSpeedButton
    Left = 0
    Top = 215
    Width = 172
    Height = 25
    Caption = 'Consultar '
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton2Click
  end
  object DBNavigator1: TDBNavigator
    Left = 172
    Top = 215
    Width = 172
    Height = 25
    DataSource = Form1.DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Flat = True
    TabOrder = 1
    OnClick = DBNavigator1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 519
    Height = 187
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 10
      Top = 16
      Width = 55
      Height = 13
      Caption = 'Matrícula'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 157
      Top = 16
      Width = 54
      Height = 13
      Caption = 'Atividade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 363
      Top = 16
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
      Top = 48
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
      Left = 365
      Top = 48
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
    object Label9: TLabel
      Left = 152
      Top = 80
      Width = 91
      Height = 13
      Caption = 'Data Conclusão'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 10
      Top = 80
      Width = 63
      Height = 13
      Caption = 'Data Inicio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 334
      Top = 80
      Width = 42
      Height = 13
      Caption = 'Horário'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 10
      Top = 160
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
    object Label5: TLabel
      Left = 436
      Top = 80
      Width = 14
      Height = 13
      Caption = 'às'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 10
      Top = 101
      Width = 105
      Height = 13
      Caption = 'Dias da Atividade:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 120
      Top = 101
      Width = 5
      Height = 13
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 217
      Top = 13
      Width = 140
      Height = 21
      MaxLength = 30
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 80
      Top = 43
      Width = 280
      Height = 21
      MaxLength = 50
      ReadOnly = True
      TabOrder = 9
    end
    object MaskEdit4: TMaskEdit
      Left = 80
      Top = 77
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 2
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object GroupBox1: TGroupBox
      Left = 10
      Top = 116
      Width = 500
      Height = 32
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      object CheckBox1: TCheckBox
        Left = 10
        Top = 13
        Width = 75
        Height = 17
        Caption = 'Segunda'
        TabOrder = 0
      end
      object CheckBox2: TCheckBox
        Left = 95
        Top = 13
        Width = 60
        Height = 17
        Caption = 'Terça'
        TabOrder = 1
      end
      object CheckBox3: TCheckBox
        Left = 175
        Top = 13
        Width = 64
        Height = 17
        Caption = 'Quarta'
        TabOrder = 2
      end
      object CheckBox4: TCheckBox
        Left = 260
        Top = 13
        Width = 63
        Height = 17
        Caption = 'Quinta'
        TabOrder = 3
      end
      object CheckBox5: TCheckBox
        Left = 341
        Top = 13
        Width = 58
        Height = 17
        Caption = 'Sexta'
        TabOrder = 4
      end
      object CheckBox6: TCheckBox
        Left = 426
        Top = 13
        Width = 65
        Height = 17
        Caption = 'Sábado'
        TabOrder = 5
      end
    end
    object MaskEdit6: TMaskEdit
      Left = 382
      Top = 76
      Width = 50
      Height = 21
      EditMask = '99:99:99;1;_'
      MaxLength = 8
      TabOrder = 4
      Text = '  :  :  '
      OnExit = MaskEdit6Exit
    end
    object Edit3: TEdit
      Left = 82
      Top = 157
      Width = 428
      Height = 21
      MaxLength = 255
      TabOrder = 7
    end
    object MaskEdit2: TMaskEdit
      Left = 442
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      TabOrder = 1
      OnExit = MaskEdit2Exit
    end
    object MaskEdit1: TMaskEdit
      Left = 80
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      ReadOnly = True
      TabOrder = 8
    end
    object MaskEdit5: TMaskEdit
      Left = 248
      Top = 77
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 3
      Text = '  /  /    '
      OnExit = MaskEdit5Exit
    end
    object MaskEdit3: TMaskEdit
      Left = 441
      Top = 43
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      ReadOnly = True
      TabOrder = 10
      Text = '  /  /    '
    end
    object MaskEdit7: TMaskEdit
      Left = 457
      Top = 76
      Width = 50
      Height = 21
      EditMask = '99:99:99;1;_'
      MaxLength = 8
      TabOrder = 5
      Text = '  :  :  '
      OnExit = MaskEdit7Exit
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 0
    Top = 241
    Width = 519
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
      'Atividade'
      'Data Inicio')
    ParentFont = False
    TabOrder = 2
    OnClick = RadioGroup1Click
  end
  object MainMenu1: TMainMenu
    Left = 14
    Top = 194
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
    object Atividade: TMenuItem
      Caption = 'Atividade'
      object CadastrarAtividade: TMenuItem
        Caption = 'Cadastrar'
        OnClick = CadastrarAtividadeClick
      end
      object ConsultarAtividade: TMenuItem
        Caption = 'Consultar'
        OnClick = ConsultarAtividadeClick
      end
      object AtualizarAtividade: TMenuItem
        Caption = 'Atualizar'
        OnClick = AtualizarAtividadeClick
      end
      object ExcluirAtividade: TMenuItem
        Caption = 'Excluir'
        OnClick = ExcluirAtividadeClick
      end
    end
  end
end
