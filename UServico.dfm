object Form14: TForm14
  Left = 282
  Top = 38
  Width = 470
  Height = 534
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
    Top = 395
    Width = 230
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
    Top = 420
    Width = 148
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
    Top = 395
    Width = 230
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
    Top = 395
    Width = 462
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
    Left = 231
    Top = 395
    Width = 230
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
    Left = 314
    Top = 420
    Width = 148
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
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 457
    Height = 393
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 10
      Top = 13
      Width = 44
      Height = 13
      Caption = 'Serviço'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 289
      Top = 13
      Width = 83
      Height = 13
      Caption = 'Código Cliente'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 10
      Top = 158
      Width = 94
      Height = 13
      Caption = 'Estabelecimento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 10
      Top = 125
      Width = 40
      Height = 13
      Caption = 'Pedido'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 131
      Top = 125
      Width = 45
      Height = 13
      Caption = 'Entrega'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 272
      Top = 125
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
    object Label3: TLabel
      Left = 10
      Top = 188
      Width = 74
      Height = 13
      Caption = 'Responsável'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 248
      Top = 246
      Width = 42
      Height = 13
      Caption = 'Medida'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 10
      Top = 246
      Width = 48
      Height = 13
      Caption = 'Degraus'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 10
      Top = 218
      Width = 41
      Height = 13
      Caption = 'Evento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 10
      Top = 277
      Width = 34
      Height = 13
      Caption = 'Valor '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 201
      Top = 277
      Width = 91
      Height = 13
      Caption = 'Cheque Caução'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 10
      Top = 308
      Width = 42
      Height = 13
      Caption = 'Modelo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label14: TLabel
      Left = 9
      Top = 338
      Width = 51
      Height = 13
      Caption = 'Conserto'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 10
      Top = 368
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
    object Label17: TLabel
      Left = 372
      Top = 125
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
    object Label16: TLabel
      Left = 10
      Top = 45
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
    object Label18: TLabel
      Left = 302
      Top = 45
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
    object Label19: TLabel
      Left = 10
      Top = 66
      Width = 95
      Height = 13
      Caption = 'Tipo de Serviço:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label20: TLabel
      Left = 120
      Top = 64
      Width = 38
      Height = 13
      Caption = 'Label20'
    end
    object Edit1: TEdit
      Left = 112
      Top = 153
      Width = 330
      Height = 21
      MaxLength = 50
      TabOrder = 7
    end
    object MaskEdit3: TMaskEdit
      Left = 60
      Top = 122
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 3
      Text = '  /  /    '
      OnExit = MaskEdit3Exit
    end
    object MaskEdit4: TMaskEdit
      Left = 182
      Top = 122
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 4
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object Edit2: TEdit
      Left = 112
      Top = 183
      Width = 330
      Height = 21
      MaxLength = 50
      TabOrder = 8
    end
    object Edit4: TEdit
      Left = 295
      Top = 243
      Width = 150
      Height = 21
      MaxLength = 20
      TabOrder = 11
    end
    object Edit3: TEdit
      Left = 112
      Top = 212
      Width = 330
      Height = 21
      MaxLength = 50
      TabOrder = 9
    end
    object Edit5: TEdit
      Left = 295
      Top = 274
      Width = 150
      Height = 21
      MaxLength = 50
      TabOrder = 13
    end
    object Edit6: TEdit
      Left = 112
      Top = 304
      Width = 330
      Height = 21
      MaxLength = 50
      TabOrder = 14
    end
    object Edit7: TEdit
      Left = 112
      Top = 334
      Width = 330
      Height = 21
      MaxLength = 50
      TabOrder = 15
    end
    object Edit8: TEdit
      Left = 112
      Top = 364
      Width = 330
      Height = 21
      MaxLength = 255
      TabOrder = 16
    end
    object MaskEdit7: TMaskEdit
      Left = 110
      Top = 245
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 10
      Text = '  '
    end
    object MaskEdit1: TMaskEdit
      Left = 60
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      ReadOnly = True
      TabOrder = 0
    end
    object MaskEdit2: TMaskEdit
      Left = 377
      Top = 10
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      TabOrder = 1
      OnExit = MaskEdit2Exit
    end
    object MaskEdit5: TMaskEdit
      Left = 318
      Top = 122
      Width = 50
      Height = 21
      EditMask = '99:99:99;1;_'
      MaxLength = 8
      TabOrder = 5
      Text = '  :  :  '
      OnExit = MaskEdit5Exit
    end
    object MaskEdit6: TMaskEdit
      Left = 393
      Top = 122
      Width = 50
      Height = 21
      EditMask = '99:99:99;1;_'
      MaxLength = 8
      TabOrder = 6
      Text = '  :  :  '
      OnExit = MaskEdit6Exit
    end
    object RadioGroup1: TRadioGroup
      Left = 10
      Top = 80
      Width = 433
      Height = 33
      Columns = 3
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      Items.Strings = (
        'Conserto Cadeira'
        'Locação Quadra'
        'Confecção Rampa')
      ParentFont = False
      TabOrder = 2
    end
    object Edit9: TEdit
      Left = 60
      Top = 40
      Width = 235
      Height = 21
      MaxLength = 50
      ReadOnly = True
      TabOrder = 17
    end
    object MaskEdit9: TMaskEdit
      Left = 376
      Top = 40
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      ReadOnly = True
      TabOrder = 18
      Text = '  /  /    '
    end
    object MaskEdit8: TMaskEdit
      Left = 110
      Top = 274
      Width = 86
      Height = 21
      Hint = 'Digite Apenas Números'
      EditMask = 'R$ 999.999,99;0;_'
      MaxLength = 13
      ParentShowHint = False
      ShowHint = True
      TabOrder = 12
    end
  end
  object RadioGroup2: TRadioGroup
    Left = 0
    Top = 446
    Width = 462
    Height = 34
    BiDiMode = bdRightToLeftNoAlign
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
      'Código Serviço'
      'Data Pedido')
    ParentBiDiMode = False
    ParentFont = False
    TabOrder = 1
    OnClick = RadioGroup2Click
  end
  object DBNavigator1: TDBNavigator
    Left = 149
    Top = 420
    Width = 164
    Height = 25
    DataSource = Form1.DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Flat = True
    TabOrder = 2
    OnClick = DBNavigator1Click
  end
  object MainMenu1: TMainMenu
    Left = 70
    Top = 274
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
    object Servico: TMenuItem
      Caption = 'Serviço'
      object CadastrarServico: TMenuItem
        Caption = 'Cadastrar'
        OnClick = CadastrarServicoClick
      end
      object ConsultarServico: TMenuItem
        Caption = 'Consultar'
        OnClick = ConsultarServicoClick
      end
      object AtualizarServico: TMenuItem
        Caption = 'Atualizar'
        OnClick = AtualizarServicoClick
      end
      object ExcluirServico: TMenuItem
        Caption = 'Excluir'
        OnClick = ExcluirServicoClick
      end
    end
  end
end
