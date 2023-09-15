object Form29: TForm29
  Left = 239
  Top = 64
  AutoSize = True
  BorderIcons = [biSystemMenu, biHelp]
  BorderStyle = bsToolWindow
  ClientHeight = 195
  ClientWidth = 528
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
    Left = 0
    Top = 114
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
    Top = 139
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
    Top = 115
    Width = 265
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
    Top = 139
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
    Top = 114
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
    Top = 139
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
    Top = 139
    Width = 176
    Height = 25
    DataSource = Form1.DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Flat = True
    TabOrder = 0
    OnClick = DBNavigator1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 528
    Height = 113
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 1
    object Label1: TLabel
      Left = 10
      Top = 22
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
      Top = 22
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
      Top = 54
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
      Top = 54
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
      Top = 20
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
      Top = 84
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
      Left = 179
      Top = 84
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
    object MaskEdit1: TMaskEdit
      Left = 105
      Top = 16
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      ReadOnly = True
      TabOrder = 0
    end
    object Edit1: TEdit
      Left = 105
      Top = 48
      Width = 225
      Height = 21
      MaxLength = 50
      ReadOnly = True
      TabOrder = 5
    end
    object MaskEdit3: TMaskEdit
      Left = 448
      Top = 48
      Width = 65
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      ReadOnly = True
      TabOrder = 6
      Text = '  /  /    '
    end
    object MaskEdit2: TMaskEdit
      Left = 449
      Top = 16
      Width = 65
      Height = 21
      EditMask = '99999999;0; '
      MaxLength = 8
      TabOrder = 2
      OnExit = MaskEdit2Exit
    end
    object MaskEdit4: TMaskEdit
      Left = 264
      Top = 17
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
      Top = 81
      Width = 65
      Height = 21
      Hint = 'Digite Apenas Números'
      EditMask = '99999999;0; '
      MaxLength = 8
      ParentShowHint = False
      ShowHint = True
      TabOrder = 3
    end
    object Edit2: TEdit
      Left = 264
      Top = 81
      Width = 250
      Height = 21
      MaxLength = 255
      TabOrder = 4
    end
  end
  object RadioGroup2: TRadioGroup
    Left = 0
    Top = 165
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
    TabOrder = 2
    OnClick = RadioGroup2Click
  end
  object MainMenu1: TMainMenu
    Left = 14
    Top = 122
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
