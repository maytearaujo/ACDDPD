object Form26: TForm26
  Left = 190
  Top = 55
  Width = 619
  Height = 381
  AutoSize = True
  BorderIcons = []
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 1
    Top = 301
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
    Left = 1
    Top = 276
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
    Left = 1
    Top = 302
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
    Left = 302
    Top = 301
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
    Left = 545
    Top = 280
    Width = 38
    Height = 13
    Caption = 'Label39'
  end
  object DBNavigator1: TDBNavigator
    Left = 196
    Top = 276
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
    TabOrder = 0
    OnClick = DBNavigator1Click
  end
  object RadioGroup1: TRadioGroup
    Left = 391
    Top = 273
    Width = 212
    Height = 29
    Caption = 'Organizar'
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -8
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    Items.Strings = (
      'Código'
      'Nome')
    ParentFont = False
    TabOrder = 1
    OnClick = RadioGroup1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 611
    Height = 275
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 2
    object Label1: TLabel
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
    object Label3: TLabel
      Left = 10
      Top = 40
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
    object Label4: TLabel
      Left = 320
      Top = 40
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
      Left = 452
      Top = 40
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
    object Label8: TLabel
      Left = 10
      Top = 117
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
      Left = 218
      Top = 117
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
    object Label11: TLabel
      Left = 181
      Top = 144
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
    object Label10: TLabel
      Left = 10
      Top = 144
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
    object Label12: TLabel
      Left = 373
      Top = 144
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
    object Label14: TLabel
      Left = 10
      Top = 194
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
    object Label15: TLabel
      Left = 280
      Top = 198
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
    object Label19: TLabel
      Left = 322
      Top = 222
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
    object Label16: TLabel
      Left = 505
      Top = 196
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
    object Label20: TLabel
      Left = 471
      Top = 222
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
    object Label17: TLabel
      Left = 10
      Top = 221
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
    object Label18: TLabel
      Left = 210
      Top = 221
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
    object Label21: TLabel
      Left = 10
      Top = 248
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
    object Label13: TLabel
      Left = 10
      Top = 168
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
    object Label6: TLabel
      Left = 10
      Top = 90
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
    object Label7: TLabel
      Left = 318
      Top = 91
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
    object Label22: TLabel
      Left = 10
      Top = 12
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
      Left = 10
      Top = 65
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
    object Label23: TLabel
      Left = 447
      Top = 64
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
    object MaskEdit1: TMaskEdit
      Left = 524
      Top = 10
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 0
      Text = '  /  /    '
    end
    object MaskEdit2: TMaskEdit
      Left = 346
      Top = 36
      Width = 87
      Height = 21
      EditMask = 'ccc.ccc.ccc-cc;1;_'
      MaxLength = 14
      TabOrder = 3
      Text = '   .   .   -  '
    end
    object MaskEdit3: TMaskEdit
      Left = 489
      Top = 36
      Width = 89
      Height = 21
      EditMask = '999.999.999-99;1;_'
      MaxLength = 14
      TabOrder = 4
      Text = '   .   .   -  '
    end
    object Edit1: TEdit
      Left = 50
      Top = 36
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 1
    end
    object ComboBox1: TComboBox
      Left = 54
      Top = 139
      Width = 89
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 8
      Items.Strings = (
        'Feminino'
        'Masculino')
    end
    object Edit4: TEdit
      Left = 298
      Top = 113
      Width = 300
      Height = 21
      MaxLength = 30
      TabOrder = 7
    end
    object MaskEdit4: TMaskEdit
      Left = 83
      Top = 113
      Width = 68
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 6
      Text = '  /  /    '
    end
    object ComboBox3: TComboBox
      Left = 453
      Top = 139
      Width = 145
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 10
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
    object ComboBox2: TComboBox
      Left = 254
      Top = 140
      Width = 97
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 9
      Items.Strings = (
        'Casado'
        'Outro'
        'Separado'
        'Solteiro'
        'Viúvo')
    end
    object MaskEdit6: TMaskEdit
      Left = 377
      Top = 218
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 17
      Text = '(  )     -    '
    end
    object MaskEdit7: TMaskEdit
      Left = 516
      Top = 218
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 18
      Text = '(  )     -    '
    end
    object Edit5: TEdit
      Left = 69
      Top = 165
      Width = 528
      Height = 21
      MaxLength = 50
      TabOrder = 11
    end
    object Edit6: TEdit
      Left = 88
      Top = 191
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 12
    end
    object Edit8: TEdit
      Left = 54
      Top = 218
      Width = 150
      Height = 21
      MaxLength = 30
      TabOrder = 15
    end
    object MaskEdit5: TMaskEdit
      Left = 534
      Top = 191
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 14
      Text = '     -   '
    end
    object Edit7: TEdit
      Left = 318
      Top = 193
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 13
    end
    object ComboBox4: TComboBox
      Left = 254
      Top = 218
      Width = 48
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 16
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
    object Edit9: TEdit
      Left = 111
      Top = 245
      Width = 488
      Height = 21
      MaxLength = 255
      TabOrder = 19
    end
    object Edit2: TEdit
      Left = 50
      Top = 86
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 2
    end
    object Edit3: TEdit
      Left = 346
      Top = 86
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 5
    end
    object Edit10: TEdit
      Left = 50
      Top = 10
      Width = 50
      Height = 21
      ReadOnly = True
      TabOrder = 20
    end
    object Edit11: TEdit
      Left = 110
      Top = 61
      Width = 323
      Height = 21
      MaxLength = 50
      TabOrder = 21
    end
    object MaskEdit8: TMaskEdit
      Left = 489
      Top = 61
      Width = 109
      Height = 21
      EditMask = '99.999.999/9999-99;1;_'
      MaxLength = 18
      TabOrder = 22
      Text = '  .   .   /    -  '
    end
  end
  object MainMenu1: TMainMenu
    Left = 6
    Top = 194
    object Associacao: TMenuItem
      Caption = 'Associação'
      object Fechar: TMenuItem
        Caption = 'Fechar'
        OnClick = FecharClick
      end
      object Sair: TMenuItem
        Caption = 'Sair'
        ShortCut = 32883
        OnClick = SairClick
      end
    end
    object TeleMarketing: TMenuItem
      Caption = 'TeleMarketing'
      object Doador: TMenuItem
        Caption = 'Doador'
        object CadastrarDoadorTel: TMenuItem
          Caption = 'Cadastrar'
          object CadastrarDoadorTelPF: TMenuItem
            Caption = 'Pessoa &Física'
            OnClick = CadastrarDoadorTelPFClick
          end
          object CadastrarDoadorTelPJ: TMenuItem
            Caption = 'Pessoa &Jurídica'
            OnClick = CadastrarDoadorTelPJClick
          end
        end
        object ConsultarDoadorTel: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarDoadorTelClick
        end
        object AtualizarDoadorTel: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarDoadorTelClick
        end
        object ExcluirDoadorTel: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirDoadorTelClick
        end
      end
      object Doacao: TMenuItem
        Caption = 'Doação'
        object CadastrarDoacaoTel: TMenuItem
          Caption = 'Cadastrar'
          OnClick = CadastrarDoacaoTelClick
        end
        object ConsultarDoacaoTel: TMenuItem
          Caption = 'Consultar'
          OnClick = ConsultarDoacaoTelClick
        end
        object AtualizarDoacaoTel: TMenuItem
          Caption = 'Atualizar'
          OnClick = AtualizarDoacaoTelClick
        end
        object ExcluirDoacaoTel: TMenuItem
          Caption = 'Excluir'
          OnClick = ExcluirDoacaoTelClick
        end
      end
    end
  end
end
