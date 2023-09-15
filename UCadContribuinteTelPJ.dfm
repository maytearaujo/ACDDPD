object Form32: TForm32
  Left = 183
  Top = 56
  Width = 497
  Height = 371
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
    Top = 292
    Width = 163
    Height = 25
    Caption = 'Verificar'
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
    Left = 163
    Top = 292
    Width = 163
    Height = 25
    Caption = 'Cadastrar'
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
    Left = 326
    Top = 292
    Width = 163
    Height = 25
    Caption = 'Limpar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton3Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 489
    Height = 298
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 327
      Top = 41
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
    object Label4: TLabel
      Left = 10
      Top = 71
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
    object Label3: TLabel
      Left = 10
      Top = 41
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
    object Label7: TLabel
      Left = 10
      Top = 157
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
    object Label8: TLabel
      Left = 280
      Top = 161
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
    object Label12: TLabel
      Left = 10
      Top = 217
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
    object Label9: TLabel
      Left = 10
      Top = 188
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
    object Label13: TLabel
      Left = 175
      Top = 217
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
    object Label10: TLabel
      Left = 113
      Top = 187
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
    object Label11: TLabel
      Left = 386
      Top = 187
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
    object Label15: TLabel
      Left = 10
      Top = 249
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
    object Label6: TLabel
      Left = 10
      Top = 129
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
    object Label5: TLabel
      Left = 10
      Top = 101
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
    object Label22: TLabel
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
    object MaskEdit1: TMaskEdit
      Left = 411
      Top = 38
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object Edit1: TEdit
      Left = 110
      Top = 67
      Width = 370
      Height = 21
      MaxLength = 50
      TabOrder = 3
    end
    object MaskEdit4: TMaskEdit
      Left = 65
      Top = 213
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 11
      Text = '(  )     -    '
    end
    object MaskEdit5: TMaskEdit
      Left = 220
      Top = 213
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 12
      Text = '(  )     -    '
    end
    object Edit3: TEdit
      Left = 110
      Top = 126
      Width = 370
      Height = 21
      MaxLength = 50
      TabOrder = 5
    end
    object Edit4: TEdit
      Left = 110
      Top = 154
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 6
    end
    object Edit6: TEdit
      Left = 158
      Top = 184
      Width = 200
      Height = 21
      MaxLength = 30
      TabOrder = 9
    end
    object MaskEdit3: TMaskEdit
      Left = 38
      Top = 183
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 8
      Text = '     -   '
    end
    object Edit5: TEdit
      Left = 318
      Top = 156
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 7
    end
    object ComboBox1: TComboBox
      Left = 430
      Top = 184
      Width = 48
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 10
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
    object Edit7: TEdit
      Left = 110
      Top = 243
      Width = 370
      Height = 21
      MaxLength = 255
      TabOrder = 13
    end
    object Edit2: TEdit
      Left = 110
      Top = 97
      Width = 370
      Height = 21
      MaxLength = 50
      TabOrder = 4
    end
    object MaskEdit2: TMaskEdit
      Left = 110
      Top = 38
      Width = 109
      Height = 21
      EditMask = '99.999.999/9999-99;1;_'
      MaxLength = 18
      TabOrder = 2
      Text = '  .   .   /    -  '
    end
    object MaskEdit7: TMaskEdit
      Left = 110
      Top = 10
      Width = 45
      Height = 21
      EditMask = '99999;1; '
      MaxLength = 5
      ReadOnly = True
      TabOrder = 0
      Text = '     '
      OnKeyPress = MaskEdit7KeyPress
    end
    object Animate1: TAnimate
      Left = 5
      Top = 267
      Width = 479
      Height = 26
      Align = alBottom
      Active = False
      AutoSize = False
      CommonAVI = aviFindFile
      StopFrame = 8
      Visible = False
    end
  end
  object MainMenu1: TMainMenu
    Left = 62
    Top = 56
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
