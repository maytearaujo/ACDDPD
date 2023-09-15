object Form6: TForm6
  Left = 239
  Top = 154
  Width = 610
  Height = 524
  HorzScrollBar.Color = clBlue
  HorzScrollBar.ParentColor = False
  HorzScrollBar.Style = ssHotTrack
  VertScrollBar.Color = clBlue
  VertScrollBar.ParentColor = False
  VertScrollBar.Style = ssHotTrack
  AutoSize = True
  BorderIcons = []
  Caption = 'Form6'
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
    Top = 445
    Width = 301
    Height = 25
    Caption = 'Atualizar'
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
    Width = 195
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
    Top = 445
    Width = 602
    Height = 25
    Caption = 'Excluir'
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
    Left = 301
    Top = 445
    Width = 301
    Height = 25
    Caption = 'Limpar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton4Click
  end
  object Label39: TLabel
    Left = 544
    Top = 424
    Width = 38
    Height = 13
    Caption = 'Label39'
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 602
    Height = 418
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Label3: TLabel
      Left = 10
      Top = 38
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
    object Label10: TLabel
      Left = 10
      Top = 64
      Width = 25
      Height = 13
      Caption = 'Mãe'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 10
      Top = 13
      Width = 40
      Height = 13
      Caption = 'Código'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 438
      Top = 13
      Width = 82
      Height = 13
      Caption = 'Data Cadastro'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label21: TLabel
      Left = 475
      Top = 89
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
    object Label6: TLabel
      Left = 10
      Top = 114
      Width = 84
      Height = 13
      Caption = 'Representante'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 10
      Top = 89
      Width = 19
      Height = 13
      Caption = 'RG'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 233
      Top = 89
      Width = 24
      Height = 13
      Caption = 'CPF'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 435
      Top = 114
      Width = 32
      Height = 13
      Caption = 'CNPJ'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 10
      Top = 164
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
      Left = 281
      Top = 164
      Width = 73
      Height = 13
      Caption = 'Naturalidade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label33: TLabel
      Left = 160
      Top = 189
      Width = 68
      Height = 13
      Caption = 'Estado Civil'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label32: TLabel
      Left = 10
      Top = 189
      Width = 29
      Height = 13
      Caption = 'Sexo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label34: TLabel
      Left = 367
      Top = 189
      Width = 74
      Height = 13
      Caption = 'Escolaridade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 364
      Top = 214
      Width = 76
      Height = 13
      Caption = 'Complemento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label14: TLabel
      Left = 10
      Top = 239
      Width = 34
      Height = 13
      Caption = 'Bairro'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label18: TLabel
      Left = 10
      Top = 264
      Width = 51
      Height = 13
      Caption = 'Telefone'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 199
      Top = 239
      Width = 25
      Height = 13
      Caption = 'CEP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label19: TLabel
      Left = 261
      Top = 264
      Width = 40
      Height = 13
      Caption = 'Celular'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label16: TLabel
      Left = 298
      Top = 239
      Width = 40
      Height = 13
      Caption = 'Cidade'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label20: TLabel
      Left = 429
      Top = 264
      Width = 36
      Height = 13
      Caption = 'Ramal'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label17: TLabel
      Left = 506
      Top = 239
      Width = 40
      Height = 13
      Caption = 'Estado'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label24: TLabel
      Left = 10
      Top = 289
      Width = 65
      Height = 13
      Caption = 'Deficiência'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label26: TLabel
      Left = 10
      Top = 314
      Width = 150
      Height = 13
      Caption = 'Nº de Membros na Família'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label27: TLabel
      Left = 215
      Top = 314
      Width = 145
      Height = 13
      Caption = 'Nº Trabalhadores Família'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label28: TLabel
      Left = 407
      Top = 314
      Width = 82
      Height = 13
      Caption = 'Renda Mensal'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label29: TLabel
      Left = 377
      Top = 339
      Width = 106
      Height = 13
      Caption = 'Tempo Residência'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label35: TLabel
      Left = 10
      Top = 339
      Width = 85
      Height = 13
      Caption = 'Tipo de Imóvel'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label30: TLabel
      Left = 10
      Top = 364
      Width = 95
      Height = 13
      Caption = 'Parecer Técnico'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label31: TLabel
      Left = 11
      Top = 389
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
    object Label25: TLabel
      Left = 485
      Top = 289
      Width = 70
      Height = 13
      Caption = 'Nº de Filhos'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 10
      Top = 214
      Width = 55
      Height = 13
      Caption = 'Endereço'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label37: TLabel
      Left = 415
      Top = 38
      Width = 80
      Height = 13
      Caption = 'Tipo de Sócio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label22: TLabel
      Left = 10
      Top = 139
      Width = 34
      Height = 13
      Caption = 'Cargo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label36: TLabel
      Left = 289
      Top = 139
      Width = 67
      Height = 13
      Caption = 'Funcionário'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label23: TLabel
      Left = 469
      Top = 139
      Width = 40
      Height = 13
      Caption = 'Salário'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 317
      Top = 64
      Width = 19
      Height = 13
      Caption = 'Pai'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 56
      Top = 10
      Width = 65
      Height = 21
      ReadOnly = True
      TabOrder = 0
      OnKeyPress = Edit1KeyPress
    end
    object Edit5: TEdit
      Left = 55
      Top = 35
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 2
    end
    object Edit6: TEdit
      Left = 55
      Top = 60
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 4
    end
    object Edit9: TEdit
      Left = 344
      Top = 60
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 5
    end
    object Edit10: TEdit
      Left = 104
      Top = 110
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 9
    end
    object Edit12: TEdit
      Left = 55
      Top = 135
      Width = 225
      Height = 21
      MaxLength = 50
      TabOrder = 11
    end
    object Edit16: TEdit
      Left = 362
      Top = 160
      Width = 230
      Height = 21
      MaxLength = 30
      TabOrder = 15
    end
    object Edit22: TEdit
      Left = 55
      Top = 235
      Width = 140
      Height = 21
      MaxLength = 30
      TabOrder = 21
    end
    object Edit24: TEdit
      Left = 342
      Top = 235
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 23
    end
    object Edit29: TEdit
      Left = 110
      Top = 285
      Width = 300
      Height = 21
      MaxLength = 100
      TabOrder = 28
    end
    object Edit33: TEdit
      Left = 493
      Top = 310
      Width = 100
      Height = 21
      MaxLength = 20
      TabOrder = 32
    end
    object Edit36: TEdit
      Left = 493
      Top = 335
      Width = 100
      Height = 21
      MaxLength = 10
      TabOrder = 35
    end
    object Edit37: TEdit
      Left = 110
      Top = 360
      Width = 484
      Height = 21
      MaxLength = 255
      TabOrder = 36
    end
    object Edit38: TEdit
      Left = 110
      Top = 385
      Width = 484
      Height = 21
      MaxLength = 255
      TabOrder = 37
    end
    object Edit20: TEdit
      Left = 70
      Top = 210
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 19
    end
    object Edit21: TEdit
      Left = 444
      Top = 210
      Width = 149
      Height = 21
      MaxLength = 30
      TabOrder = 20
    end
    object MaskEdit1: TMaskEdit
      Left = 523
      Top = 10
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object ComboBox1: TComboBox
      Left = 500
      Top = 35
      Width = 95
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 3
      OnChange = ComboBox1Change
    end
    object MaskEdit2: TMaskEdit
      Left = 81
      Top = 160
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 14
      Text = '  /  /    '
      OnExit = MaskEdit2Exit
    end
    object ComboBox2: TComboBox
      Left = 55
      Top = 185
      Width = 89
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 16
      Items.Strings = (
        'Feminino'
        'Masculino')
    end
    object ComboBox3: TComboBox
      Left = 232
      Top = 185
      Width = 97
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 17
      Items.Strings = (
        'Casado'
        'Outro'
        'Separado'
        'Solteiro'
        'Viúvo')
    end
    object ComboBox4: TComboBox
      Left = 450
      Top = 185
      Width = 145
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 18
      Items.Strings = (
        '1º Grau Completo'
        '1º Grau Incompleto'
        '2º Grau Completo'
        '2º Grau Incompleto'
        'Analfabeto'
        'Primário Completo'
        'Primário Incompleto'
        'Superior Completo'
        'Superior Incompleto')
    end
    object ComboBox5: TComboBox
      Left = 360
      Top = 135
      Width = 100
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 12
      Items.Strings = (
        'Entidade'
        'Prefeitura'
        'Voluntário')
    end
    object ComboBox6: TComboBox
      Left = 548
      Top = 235
      Width = 45
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 24
      Items.Strings = (
        'AC'
        'AL'
        'AM'
        'AP'
        'BA'
        'CE'
        'DF'
        'ES'
        'GO'
        'MA'
        'MG'
        'MS'
        'MT'
        'PA'
        'PB'
        'PE'
        'PI'
        'PR'
        'RJ'
        'RN'
        'RO'
        'RR'
        'RS'
        'SC'
        'SE'
        'SP'
        'TO')
    end
    object MaskEdit3: TMaskEdit
      Left = 110
      Top = 260
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 25
      Text = '(  )     -    '
    end
    object MaskEdit4: TMaskEdit
      Left = 311
      Top = 260
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 26
      Text = '(  )     -    '
    end
    object MaskEdit5: TMaskEdit
      Left = 470
      Top = 260
      Width = 121
      Height = 21
      EditMask = '(99) 9999-9999 R:9999'
      MaxLength = 21
      TabOrder = 27
      Text = '(  )     -     R:    '
    end
    object MaskEdit7: TMaskEdit
      Left = 167
      Top = 310
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 30
      Text = '  '
    end
    object MaskEdit8: TMaskEdit
      Left = 369
      Top = 310
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 31
      Text = '  '
    end
    object MaskEdit6: TMaskEdit
      Left = 566
      Top = 285
      Width = 25
      Height = 21
      EditMask = '99;1;_'
      MaxLength = 2
      TabOrder = 29
      Text = '  '
    end
    object ComboBox7: TComboBox
      Left = 110
      Top = 335
      Width = 85
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 33
      Items.Strings = (
        'Alugado'
        'Cedido'
        'Próprio')
    end
    object ComboBox8: TComboBox
      Left = 206
      Top = 335
      Width = 85
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 34
      Items.Strings = (
        'Alvenaria'
        'Madeira'
        'Misto')
    end
    object MaskEdit9: TMaskEdit
      Left = 55
      Top = 85
      Width = 87
      Height = 21
      EditMask = 'ccc.ccc.ccc-cc;1;_'
      MaxLength = 14
      TabOrder = 6
      Text = '   .   .   -  '
    end
    object MaskEdit10: TMaskEdit
      Left = 264
      Top = 85
      Width = 89
      Height = 21
      EditMask = '999.999.999-99;1;_'
      MaxLength = 14
      TabOrder = 7
      Text = '   .   .   -  '
    end
    object MaskEdit11: TMaskEdit
      Left = 512
      Top = 135
      Width = 80
      Height = 21
      EditMask = 'R$ 999.999,99;1;_'
      MaxLength = 13
      TabOrder = 13
      Text = 'R$    .   ,  '
    end
    object MaskEdit12: TMaskEdit
      Left = 536
      Top = 85
      Width = 56
      Height = 21
      EditMask = '999.999-9'
      MaxLength = 9
      TabOrder = 8
      Text = '   .   - '
    end
    object MaskEdit13: TMaskEdit
      Left = 227
      Top = 235
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 22
      Text = '     -   '
    end
    object MaskEdit14: TMaskEdit
      Left = 484
      Top = 110
      Width = 109
      Height = 21
      EditMask = '99.999.999/9999-99;1;_'
      MaxLength = 18
      TabOrder = 10
      Text = '  .   .   /    -  '
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 195
    Top = 420
    Width = 196
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
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = DBNavigator1Click
  end
  object RadioGroup1: TRadioGroup
    Left = 390
    Top = 416
    Width = 212
    Height = 30
    Caption = 'Organizar'
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -9
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    Items.Strings = (
      'Código Sócio'
      'Nome Sócio')
    ParentFont = False
    TabOrder = 2
    OnClick = RadioGroup1Click
  end
  object MainMenu1: TMainMenu
    Left = 30
    Top = 346
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
    object Socios1: TMenuItem
      Caption = 'Sócio'
      object Socios: TMenuItem
        Caption = 'Sócio'
        object CadastrarSocios: TMenuItem
          Caption = 'Cadastrar'
          object CadastrarFuncionario: TMenuItem
            Caption = 'Funcionário'
            OnClick = CadastrarFuncionarioClick
          end
          object CadastrarNatural: TMenuItem
            Caption = 'Natural'
            OnClick = CadastrarNaturalClick
          end
          object CadastrarContribuinte: TMenuItem
            Caption = 'Contribuinte'
            object CadastrarContribuintePF: TMenuItem
              Caption = 'Pessoa &Física'
              OnClick = CadastrarContribuintePFClick
            end
            object CadastrarContribuintePJ: TMenuItem
              Caption = 'Pessoa &Jurídica'
              OnClick = CadastrarContribuintePJClick
            end
          end
        end
        object ConsultarSocios: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarSociosClick
        end
        object AtualizarSocios: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarSociosClick
        end
        object ExcluirSocios: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirSociosClick
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
end
