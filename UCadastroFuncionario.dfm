object Form3: TForm3
  Left = 188
  Top = 174
  Width = 616
  Height = 381
  AutoSize = True
  BorderIcons = []
  Caption = 'Cadastro de Funcionário'
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
    Left = 1
    Top = 302
    Width = 202
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
    Left = 203
    Top = 302
    Width = 202
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
    Left = 405
    Top = 302
    Width = 202
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
    Width = 608
    Height = 306
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object Label1: TLabel
      Left = 440
      Top = 12
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
      Left = 478
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
      Top = 120
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
      Left = 217
      Top = 120
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
      Left = 157
      Top = 147
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
      Top = 147
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
      Top = 147
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
      Top = 200
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
      Top = 204
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
      Top = 228
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
      Top = 202
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
      Top = 228
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
      Top = 227
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
      Top = 227
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
      Top = 257
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
      Top = 173
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
      Top = 66
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
      Top = 67
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
    object Label2: TLabel
      Left = 264
      Top = 12
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
    object Label22: TLabel
      Left = 10
      Top = 92
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
    object Label23: TLabel
      Left = 289
      Top = 92
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
    object Label24: TLabel
      Left = 475
      Top = 92
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
    object Label25: TLabel
      Left = 10
      Top = 14
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
      Left = 528
      Top = 10
      Width = 70
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 1
      Text = '  /  /    '
      OnExit = MaskEdit1Exit
    end
    object MaskEdit2: TMaskEdit
      Left = 346
      Top = 36
      Width = 87
      Height = 21
      EditMask = 'ccc.ccc.ccc-cc;1;_'
      MaxLength = 14
      TabOrder = 4
      Text = '   .   .   -  '
    end
    object MaskEdit3: TMaskEdit
      Left = 508
      Top = 36
      Width = 89
      Height = 21
      EditMask = '999.999.999-99;1;_'
      MaxLength = 14
      TabOrder = 5
      Text = '   .   .   -  '
    end
    object Edit1: TEdit
      Left = 55
      Top = 36
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 2
    end
    object ComboBox1: TComboBox
      Left = 55
      Top = 142
      Width = 89
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 12
      Items.Strings = (
        'Feminino'
        'Masculino')
    end
    object Edit4: TEdit
      Left = 297
      Top = 116
      Width = 300
      Height = 21
      MaxLength = 30
      TabOrder = 11
    end
    object MaskEdit4: TMaskEdit
      Left = 80
      Top = 116
      Width = 68
      Height = 21
      EditMask = '99/99/9999;1;_'
      MaxLength = 10
      TabOrder = 10
      Text = '  /  /    '
      OnExit = MaskEdit4Exit
    end
    object ComboBox3: TComboBox
      Left = 453
      Top = 142
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 14
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
      Left = 232
      Top = 143
      Width = 97
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 13
      Items.Strings = (
        'Casado'
        'Outro'
        'Separado'
        'Solteiro'
        'Viúvo')
    end
    object MaskEdit6: TMaskEdit
      Left = 377
      Top = 224
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999;1;_'
      MaxLength = 14
      TabOrder = 21
      Text = '(  )     -    '
    end
    object MaskEdit7: TMaskEdit
      Left = 515
      Top = 224
      Width = 83
      Height = 21
      EditMask = '(99) 9999-9999'
      MaxLength = 14
      TabOrder = 22
      Text = '(  )     -    '
    end
    object Edit5: TEdit
      Left = 68
      Top = 170
      Width = 529
      Height = 21
      MaxLength = 50
      TabOrder = 15
    end
    object Edit6: TEdit
      Left = 90
      Top = 197
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 16
    end
    object Edit8: TEdit
      Left = 55
      Top = 224
      Width = 150
      Height = 21
      MaxLength = 30
      TabOrder = 19
    end
    object MaskEdit5: TMaskEdit
      Left = 533
      Top = 197
      Width = 65
      Height = 21
      EditMask = '99999-999'
      MaxLength = 9
      TabOrder = 18
      Text = '     -   '
    end
    object Edit7: TEdit
      Left = 318
      Top = 199
      Width = 160
      Height = 21
      MaxLength = 30
      TabOrder = 17
    end
    object ComboBox4: TComboBox
      Left = 254
      Top = 224
      Width = 48
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 20
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
      Left = 90
      Top = 251
      Width = 508
      Height = 21
      MaxLength = 255
      TabOrder = 23
    end
    object Edit2: TEdit
      Left = 55
      Top = 62
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 347
      Top = 62
      Width = 250
      Height = 21
      MaxLength = 50
      TabOrder = 6
    end
    object Edit10: TEdit
      Left = 55
      Top = 89
      Width = 225
      Height = 21
      MaxLength = 50
      TabOrder = 7
    end
    object ComboBox5: TComboBox
      Left = 360
      Top = 89
      Width = 100
      Height = 21
      ItemHeight = 13
      Sorted = True
      TabOrder = 8
      Items.Strings = (
        'Entidade'
        'Prefeitura'
        'Voluntário')
    end
    object MaskEdit8: TMaskEdit
      Left = 518
      Top = 89
      Width = 80
      Height = 21
      EditMask = 'R$ 999.999,99;1;_'
      MaxLength = 13
      TabOrder = 9
      Text = 'R$    .   ,  '
    end
    object MaskEdit9: TMaskEdit
      Left = 55
      Top = 10
      Width = 45
      Height = 21
      EditMask = '99999;1; '
      MaxLength = 5
      ReadOnly = True
      TabOrder = 0
      Text = '     '
    end
    object Animate1: TAnimate
      Left = 5
      Top = 275
      Width = 598
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
    Left = 6
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
